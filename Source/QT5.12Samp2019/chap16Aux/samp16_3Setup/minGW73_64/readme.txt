AudioPlayer.exe版本： Qt 5.12.1 + minGW73-64bit
	
发布步骤如下：
(1)将Qt相应编译器版本的 \bin目录添加到Windows的PATH环境变量里，因为windeployqt指令，还有Qt库都在这个目录下
这个目录例如是   D:\Qt\Qt5.12.1\5.12.1\mingw73_64\bin

(2)双击运行批处理文件rundeploy.bat，将复制Qt的运行库到此目录下

(3)再删除先前添加到PATH环境变量中的\bin目录

(4)运行此目录下的AudioPlayer.exe，如果提示找不到某个dll文件，手动将Qt的\bin目录下的dll文件复制到此目录下即可
	经测试，执行批处理文件后，运行AudioPlayer.exe时还提示缺少3个dll文件。
	为了测试方便，已经将这3个文件复制到此目录下, libgcc_s_seh-1.dll,libstdc++-6.dll,libwinpthread-1.dll

