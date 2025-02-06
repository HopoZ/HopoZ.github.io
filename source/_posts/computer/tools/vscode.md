---
date: 2025-02-06 17:27:06
timeline: article
title: vscode
categories: tools
tags:
  - vscode
toc: true
---

已经实现：
cpg生成C++常用结构`snippets`
  搜索snippets，创建c++.code-snippets文件，创建例如
  ```
  {
    "Default C++ Template": {
        "prefix": "cpg", // 这是触发代码片段的前缀，你可以自定义
        "body": [
            "#include<bits/stdc++.h>",
            "",
            "using namespace std;",
            "",
            "int main() {",
            "    $1", //	$1是占位符
            "    return 0;",
            "}"
        ],
        "description": "C++ Default Template with #include"
    },
  }
  ```



笔记使用相对引用的一个问题是，当移动笔记位置时(层次上的移动)，将导致图片无法识别，需要手动更改

又出现了个莫名其妙的bug，新文件如果不先debug下，无法使用智能提示

：在很多情况下，使用 G++ 命令编译 C++ 程序相比使用 GCC 命令，不需要手动指定链接 C++ 标准库。

把vscode的默认终端换成强大的pw7
```
"terminal.integrated.profiles.windows": {
    "PowerShell 7": {
        "path": "C:\\your path\\pwsh.exe"
    }
},
"terminal.integrated.defaultProfile.windows": "PowerShell 7"
```
