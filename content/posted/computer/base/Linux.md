+++
title = '{{ replace .File.ContentBaseName "-" " " | title }}'
date = 2024-03-26T14:55:58+08:00
draft = false
+++

sudo chmod 600 ××× （只有所有者有读和写的权限）

sudo chmod 644 ××× （所有者有读和写的权限，组用户只有读的权限）

sudo chmod 700 ××× （只有所有者有读和写以及执行的权限）

sudo chmod 666 ××× （每个人都有读和写的权限）

sudo chmod 777 ××× （每个人都有读和写以及执行的权限）

其中×××指文件名（也可以是文件夹名，不过要在chmod后加-ld）。
0 [000] 无任何权限

4 [100] 只读权限

6 [110] 读写权限

7 [111] 读写执行权限
nano按ctrl+x退出(并询问你是否保存)
[AltGr]()  
AltGr（Alternative Graphic）是一个键盘上的修饰键，通常位于右侧的 Alt 键旁边。它在某些国际键盘布局中存在，尤其是在欧洲和其他一些地区的键盘上较为常见。AltGr 键设计用于提供一种方式，通过按住 AltGr 键并同时按下其他键，以访问一些特殊字符、符号或国际字符。

AltGr 键通常用于生成与按下普通 Alt 键时不同的字符。例如，在使用 AltGr 键时，某些键可能会产生特殊符号，例如 €、@、~、{、} 等。

具体来说，AltGr 键在键盘上的位置可能因键盘布局而异。在美式键盘上，AltGr 键通常位于右侧的 Alt 键旁边，但并非所有键盘布局都包含 AltGr 键。在使用某些键盘布局时，Alt 键本身可能充当 AltGr 键，用于生成附加字符。

[bash: ./setup: /bin/bash^M: bad interpreter: No such file or directory ]()  

这个错误通常是由于文本文件的换行符格式引起的。^M 表示回车符（Carriage Return，CR），在Unix/Linux系统中通常使用换行符（Line Feed，LF）。在Windows系统中，换行通常由回车和换行两个字符表示（CR LF）。  

`sed -i 's/\r$//' setup`
这将在文件中删除回车符，使其在Unix/Linux系统上能够正确执行。

```
sudo /usr/bin/vmhgfs-fuse .host:/ /mnt/hgfs -o subtype=vmhgfs-fuse,allow_other

```
挂载与主机共享目录