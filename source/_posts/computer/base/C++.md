---
date: 2025-01-29 19:09:57
timeline: article
title: c++
categories: base
tags:
  - cpp
toc: true
abstract: "C++基础内容和C++杂记"
---

# main()
推荐网站:
  - [](https://cppreference.com)
  -
# 代码片段
把打开的文件作为输出流的对象
```
freopen("1.out","w",stdout);
```


降低cin,cout时耗，如代码所见，第一句取消cin绑定cout,第二局取消cin/cout绑定stdio(绑定就是同步关系)
```
cin.tie(0);
ios::base::sync_with_stdio(false);
```

测试时用来注释掉代码
```
#if 0
#endif
```

输出所属类型的首字母
```
typeid().name()
```
![](/picture/Snipaste_2025-01-29_19-09-18.png)

# 杂记
[兼容]()
直译有一个问题, 英语的"前后"在时间和空间上统一, 而汉语却是相反. 比如forward在空间上指前进, 在时间上指未来. 但是汉语中的"前"在空间上指前进, 在时间上却指过去.
**向前兼容**前进兼容
**向后兼容**后退兼容
这么想这两个词应该没问题了

[vsode终端]() 输入chcp (change code page)后，显示936 对应 GB 2312，65001 对应 UTF-8，windows 中文系统默认是 936。

转义用的是右斜`\`,因此建议复制粘贴win路径时要小心

`shift+tab`反向缩进

[无穷]()
随便用大点的树表示一下
正无穷 0x3f3f3f3f`1061109567`
负无穷 0xc0c0c0c0`-1061109568` 或 -0x3f3f3f3f

C++中NULL是未定义的，在`#include <cstddef>`后被定义为__null，__null我没找到进一步定义，查看资料说是被编译器实现，成为空指针类型，这么复杂地搞。那为什么C++不继承这个__null实现，而是实现了一个特殊的字面值常量nullptr，与所有指针类型的 0 值等效呢。有趣。
