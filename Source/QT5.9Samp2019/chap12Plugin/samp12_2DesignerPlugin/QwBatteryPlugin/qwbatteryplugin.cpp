#include "qwbattery.h"
#include "qwbatteryplugin.h"

#include <QtPlugin>

QwBatteryPlugin::QwBatteryPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QwBatteryPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    m_initialized = true;
}

bool QwBatteryPlugin::isInitialized() const
{//是否初始化
    return m_initialized;
}

QWidget *QwBatteryPlugin::createWidget(QWidget *parent)
{//返回自定义Widget组件的实例
    return new QwBattery(parent);
}

QString QwBatteryPlugin::name() const
{//自定义Widget组件类的名称
    return QLatin1String("QwBattery");
}

QString QwBatteryPlugin::group() const
{//在组件面板中所属分组名称
    return QLatin1String("MyWidget");
}

QIcon QwBatteryPlugin::icon() const
{//图标文件名
    return QIcon(QLatin1String(":/44.ico"));
}

QString QwBatteryPlugin::toolTip() const
{//toolTip信息
    return QLatin1String("Battery charger indicator");
}

QString QwBatteryPlugin::whatsThis() const
{//whatsThis 信息
    return QLatin1String("A battery charger indicator");
}

bool QwBatteryPlugin::isContainer() const
{ //是否作为容器， false表示该组件上不允许再放其他组件
    return false;
}

QString QwBatteryPlugin::domXml() const
{//XML文件描述信息
    return QLatin1String("<widget class=\"QwBattery\" name=\"qwBattery\">\n</widget>\n");
}

QString QwBatteryPlugin::includeFile() const
{//包含文件名
    return QLatin1String("qwbattery.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(qwbatteryplugin, QwBatteryPlugin)
#endif // QT_VERSION < 0x050000
