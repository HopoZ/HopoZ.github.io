+++
title = '{{ tmux }}'
date = 2024-05-07T14:55:58+08:00
draft = false
+++

tmux是一个流行的终端复用器，它允许用户在一个终端窗口中运行多个终端会话，并且可以不间断地在它们之间切换。tmux对于远程工作、长期运行的任务以及终端环境的组织管理非常有帮助。

# rename
会话(Session)重命名

使用快捷键重命名:

`Ctrl + B, $`

使用指令重命名,按快捷键进入指令模式

`Ctrl + B, :`

输入下述指令, 指定当前会话名称和新的会话名称

`rename-session [-t current-name] [new-name]`

窗口(Windows)重命名

使用快捷键来重命名:

`Ctrl + B, ,`

使用指令重命名, 类似上面提到的进入命令模式

`Ctrl + B, :`

输入窗口重命名指令

`rename-window [-t current-name] [new-name]`
