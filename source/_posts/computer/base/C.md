---
date: 2025-01-29 17:51:18
timeline: article
title: C
categories: base
tags:
  - C
toc: true
---

# 头文件

## `<unistd.h>`。
即Unix standard,定义了符合POSIX(Portable Operation System Interface)的接口。
如write、read和close函数
![](/picture/Snipaste_2025-01-29_17-09-35.png)
![](/picture/Snipaste_2025-01-29_17-12-46.png)
![](/picture/Snipaste_2025-01-29_17-15-15.png)


## `termios.h`
即terminal i/o settings,这个头文件提供了对终端接口进行控制的API，允许程序员配置和管理终端或伪终端的行为，例如设置字符回显、行处理、控制字符等。
termios结构体，储存了终端属性
![](/picture/Snipaste_2025-01-29_17-42-00.png)
tcgetattr和tcsetattr设置终端属性
![](/picture/Snipaste_2025-01-29_17-50-32.png)

# 杂记

`&=：`这是位操作符中的按位与赋值操作符