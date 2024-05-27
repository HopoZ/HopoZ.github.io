+++
title = '{{ vscode }}'
date = 2024-03-26T14:55:58+08:00
draft = false
+++

已经实现：  
cpg生成C++常用结构`snippets`  


ctrl+j生成新空白行,ctrl+l相当于右箭头
弃用以上，还是用回了nvim，编程式移动很爽。

用`he`按tab生成`[]()`
笔记使用相对引用的一个问题是，当移动笔记位置时(层次上的移动)，将导致图片无法识别，需要手动更改

又出现了个莫名其妙的bug，新文件如果不先debug下，无法使用智能提示

：在很多情况下，使用 G++ 命令编译 C++ 程序相比使用 GCC 命令，不需要手动指定链接 C++ 标准库。

把vscode的默认终端换成强大的pw7
"terminal.integrated.profiles.windows": {
    "PowerShell 7": {
        "path": "C:\\your path\\pwsh.exe"
    }
},
"terminal.integrated.defaultProfile.windows": "PowerShell 7"
