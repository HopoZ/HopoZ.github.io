---
date: 2024-01-20 23:18:26
timeline: article
title: Linux
categories: base
tags:
  - linux
toc: true
---
# info

# Linux常见问题

## [bash: ./setup: /bin/bash^M: bad interpreter: No such file or directory ]()

这个错误通常是由于文本文件的换行符格式引起的。^M 表示回车符（Carriage Return，CR），在Unix/Linux系统中通常使用换行符（Line Feed，LF）。在Windows系统中，换行通常由回车和换行两个字符表示（CR LF）。

`sed -i 's/\r$//' setup`
这将在文件中删除回车符，使其在Unix/Linux系统上能够正确执行。



## 挂载与主机共享目录
```
sudo /usr/bin/vmhgfs-fuse .host:/ /mnt/hgfs -o subtype=vmhgfs-fuse,allow_other

```