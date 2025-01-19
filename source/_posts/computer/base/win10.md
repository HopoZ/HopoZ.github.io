---
title: win10
categories: daily
tags:
  - win10
---

>`Win+Shift+S`就可以快速截图了
>当我们打开很多窗口的时候，想快速将其他窗口最小化，只需要拖动当前窗口快速「抖动」两下即可实现。

>`Alt+Tab`快速切换到不同的窗口视图，`shift+tab`反向切换。
`Ctrl+Tab`快速切换浏览器窗口

[chrome开启夜间模式]() 打开chrome://flags 搜索force dark mode

# 虚拟桌面

>ctrl+win+d 新建虚拟桌面
ctrl+win+`->` 切换虚拟桌面

>win+tab 弹出窗口总览

`f11`调整网页全屏
`F1`帮助
`F2`改名
`F5`刷新
`tab`改变焦点
`Ctrl+D`  打开“添加收藏”面版(把当前页面添加到收藏夹中)
`ctrl+W`  关闭当前页面
`Ctrl+Y`　 重做刚才动作(一般只用于文本操作)
`Ctrl+*`　恢复当前页面的缩放为原始大小
`alt+f4`关闭当前应用
`win+tab` 在打开的项目之间切换
`win+a`电脑通知栏
`win+q`全局搜索界面
`win+h`语音输入

机器开机出现标志的时候按`F10`进入BIOS(不同品牌不一样，我的是`F2`)

[修改任务栏图标颜色]()
HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Themes\Personalize

修改的ColorPrevalence值为1  # 值=0 黑色；值=1或2 白色
修改SystemUsesLightTheme的值为0  # 值=0 白色；值=1 黑色

[系统文件]() LocalLow 文件夹与Local 文件夹基本相同，区别在于前者用于优先级较低的应用程序（运行时安全设置受限）

2023-0616  Computer\HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Session Manager\Memory Management这里把Large System Cache改成了1
如果是针对某款游戏或程序要禁用全屏优化，可以直接点击游戏exe文件右键[属性-兼容性-禁用全面优化]勾上就行。

```
netstat -ano
//查询后门程序连接
```
```
rename *.* ?????-original.*
```

`*.*`表示此文件夹中任何文件
`？？？？？`表示保留原始文件名的前五个字符
`-original`在每个文件名末尾加上这些字符
`netsh wlan show profile HIT-WLAN key=clear`  显示已保存的互联网`HIT-WLAN`密码
`osk`打开on-screen keyboard
`telnet towel.blinkenlights.nl`观看星球大战
[BAT]() batch批处理
[CLI]()（Command Line Interface，命令行界面）
`echo .>filename` 创建一个无后缀文件
//DONE 不知道为什么注册表右键添加不能用(也已经在注册表写了没删),我准备用AutoHotkey搞一个
我添加了右键本目录cmd选项，这样我就可以输入
echo .> filename 来快捷建立新文件了(会使文件添加一个.)
echo. > filename 会使文件添加一个 (空格)


# windows下禁用笔记本自带键盘
管理员运行cmd2. sc config i8042prt start=disabled3. 重启win10 1803亲测可用。但是注意这里有个坑，网上能搜到的教你恢复的方法都是不管用的，最起码win10下不管用，sc config i8042prt start=auto是恢复不了的，要用sc config i8042prt start=demand才行。对应的注册表位置：[HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\i8042prt]"Start"=dword:00000003     // 对应start= demand，服务类型：手动"Start"=dword:00000004     // 对应start= disabled，服务类型：禁用

[环境变量]()
当前执行的程序如果在当前目录不存在，win10会自动去名为path的环境变量中查找。
环境变量没有区分大小写，例如path跟PATH是一样的
如果系统变量和用户变量的PATH中同时包含了同一个命令，则优先执行系统变量PATH中的命令

```
netsh winsock reset //修复网络LSP
```
# 注册表

[鼠标右键功能键]()
HKEY_CLASSES_ROOT\*\shellex\ContextMenuHandlers
HKEY_CLASSES_ROOT\Directory\shell
HKEY_CLASSES_ROOT\Directory\shellex\ContextMenuHandlers
HKEY_CLASSES_ROOT\Folder\shell
HKEY_CLASSES_ROOT\Folder\shellex\ContextMenuHandlers
[资源管理器左侧功能]()
;取消文件资源管理器左侧 下载 文件夹

[-HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\MyComputer\NameSpace\{088e3905-0323-4b02-9826-5d99428e115f}]

;取消文件资源管理器左侧 3D对象 文件夹

[-HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\MyComputer\NameSpace\{0DB7E03F-FC29-4DC6-9020-FF41B59E513A}]

;取消文件资源管理器左侧 图片 文件夹

[-HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\MyComputer\NameSpace\{24ad3ad4-a569-4530-98e1-ab02f9417aa8}]

;取消文件资源管理器左侧 音乐 文件夹

[-HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\MyComputer\NameSpace\{3dfdf296-dbec-4fb4-81d1-6a3438bcf4de}]

;取消文件资源管理器左侧 桌面 文件夹

[-HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\MyComputer\NameSpace\{B4BFCC3A-DB2C-424C-B029-7FE99A87C641}]

;取消文件资源管理器左侧 文档 文件夹

[-HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\MyComputer\NameSpace\{d3162b92-9365-467a-956b-92703aca08af}]

;取消文件资源管理器左侧 视频 文件夹

[-HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\MyComputer\NameSpace\{f86fa3ab-70d2-4fc7-9c99-fcbf05467f3a}]
[改paint为默认照片查看器]()
HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows Photo Viewer\Capabilities\FileAssociations,这里新建字符串值，名字为.png或.jpg，值设为PhotoViewer.FileAssoc.Tiff，即可出现原来的图片查看器。(发现都不好用)
[隐藏右下角图标]()
在注册表中寻找以下路径：HKEY_CURRENT_USER\Software\\(你的应用)，右键它——新建——DWORD (32 位) 值，将新建的注册表命名为：hideTrayIcon,将值赋为1.
[启动项]()
HKEY_LOCAL_MACHINE\Software\Microsoft\Windows\CurrentVersion\Run
HKEY_LOCAL_MACHINE\Software\Microsoft\Windows\CurrentVersion\RunOnce
HKEY_LOCAL_MACHINE\Software\Microsoft\Windows\CurrentVersion\RunServices
HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Run
...
在 Windows 中，要实现右键菜单中包含“在此处打开命令提示符”选项，您可以使用注册表编辑器添加一个注册表项。请注意，修改注册表可能会对系统产生影响，因此在进行此类更改之前，请确保备份您的注册表。

以下是通过注册表编辑器添加右键菜单选项的步骤：

1. **打开注册表编辑器：**
   - 按下 `Win + R` 打开“运行”对话框。
   - 输入 `regedit` 并按下 Enter。

2. **导航到适当的注册表路径：**
   - 转到以下注册表路径：
     ```
     HKEY_CLASSES_ROOT\Directory\Background\shell
     ```

3. **在“shell”键下创建一个新的项：**
   - 在 "shell" 键下右键单击，选择“新建” > “项”。
   - 将新项命名为你想要显示在右键菜单中的名称，比如 "OpenCmdHere"。

4. **在新项下创建子项 “command”：**
   - 在新创建的项下右键单击，选择“新建” > “项”。
   - 将新项命名为 "command"。

5. **设置默认值：**
   - 在右侧窗格中，双击 "Default" 项。
   - 在弹出的编辑字符串对话框中，将数值数据设置为：
     ```
     cmd.exe /s /k pushd "%V"
     ```

   这个值将打开一个新的命令提示符窗口，并将当前目录设置为资源管理器中右键单击的目录。

6. **关闭注册表编辑器：**
   - 保存更改并关闭注册表编辑器。

之后，您在资源管理器中右键单击文件夹时应该会看到新添加的 "OpenCmdHere" 选项。请注意，修改注册表可能对系统产生影响，因此在进行此类更改之前，请确保备份您的注册表。
我发现如果直接重命名一项(只改变某个字母大小写)会报错，说已经存在这项，解决方法是先随意改名，再改成你想要的版本

# 禁用笔记本自带键盘

1. 管理员运行cmd

2. sc config i8042prt start=disabled

3. 重启

sc config i8042prt start=demand 恢复

注册表位置:[HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\i8042prt]
"Start"=dword:00000003 // 对应start= demand，服务类型：手动

"Start"=dword:00000004 // 对应start= disabled，服务类型：禁用

