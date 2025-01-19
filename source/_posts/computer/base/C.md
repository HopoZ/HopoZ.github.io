---
title: C
categories: base
tags:
  - C
toc: true
---

## `<unistd.h>`
的名字来源于“Unix standard”（Unix标准）的缩写。这个头文件定义了符合POSIX（Portable Operating System Interface，可移植操作系统接口）标准的接口，提供了一套操作系统级别的API，使得应用程序可以在不同的Unix-like系统之间进行移植。POSIX标准旨在提供一个统一的操作系统编程接口，以促进软件在不同Unix系统之间的兼容性和可移植性。


## `termios.h`
是一个C语言的头文件，用于POSIX（Portable Operating System Interface）系统上的终端I/O接口。这个头文件提供了对终端接口进行控制的API，允许程序员配置和管理终端或伪终端的行为，例如设置字符回显、行处理、控制字符等。

名称`termios`来源于“terminal input/output settings”（终端输入/输出设置）的缩写，强调了这个API集主要用于控制终端I/O行为的设置。在早期Unix历史中，终端是用户与计算机交互的主要方式，因此对终端行为的精细控制是非常重要的。随着时间的发展，虽然用户交互方式更加多样化，但`termios`接口仍然是在Unix-like系统中控制和配置基于文本的输入/输出设备的基础。

`termios`API代表了对更早Unix终端控制接口的一个进化，它提供了比旧的`termio`和`sgtty`接口更一致和更灵活的方式来处理终端设置。通过`termios`，程序可以以非常精细的方式控制终端的各种模式，使得创建诸如文本编辑器、终端模拟器等复杂的文本界面应用成为可能。

`&=：`这是位操作符中的按位与赋值操作符