+++
title = '{{ replace .File.ContentBaseName "-" " " | title }}'
date = 2024-03-26T14:55:58+08:00
draft = false
+++

```
^\s*#.*$
```
从行首开始查找0或多个空格，然后紧跟着一个井号(#)和任意数量的字符，直到行尾结束。

```
^\s*\n
```
删除所有空行