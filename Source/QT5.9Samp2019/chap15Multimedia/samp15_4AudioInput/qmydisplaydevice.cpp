/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Charts module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 or (at your option) any later version
** approved by the KDE Free Qt Foundation. The licenses are as published by
** the Free Software Foundation and appearing in the file LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qmydisplaydevice.h"
#include <QtCharts/QXYSeries>

QmyDisplayDevice::QmyDisplayDevice(QXYSeries * series, qint64 pointsCount, QObject *parent) :
    QIODevice(parent)
//    m_series(series)
{
   m_series= series;
   range=pointsCount;
}

qint64 QmyDisplayDevice::readData(char * data, qint64 maxSize)
{// 流的读 操作不处理
    Q_UNUSED(data)
    Q_UNUSED(maxSize)
    return -1;
}

qint64 QmyDisplayDevice::writeData(const char * data, qint64 maxSize)
{ //读取数据块内的数据，更新到序列
    QVector<QPointF> oldPoints = m_series->pointsVector();
    QVector<QPointF> points;
//    int resolution = 4;//只是每4个取1个数
//    int resolution = 1;//应改为sampleSize=1 byte

    if (oldPoints.count() < range)
    { //m_series序列的数据未满4000点，
       points = m_series->pointsVector();
    }
    else
    {//将原来maxSize至4000的数据点前移，
       for (int i = maxSize; i < oldPoints.count(); i++)
          points.append(QPointF(i - maxSize, oldPoints.at(i).y()));
    }

    qint64 size = points.count();
    for (int k = 0; k < maxSize; k++) //数据块内的数据填充序列的尾部
        points.append(QPointF(k + size, (quint8)data[k]));

    m_series->replace(points); //最快的方式

    emit updateBlockSize(maxSize);
    return maxSize;
}
