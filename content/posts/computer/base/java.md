+++
title = '{{ java }}'
date = 2024-03-26T14:55:58+08:00
draft = false
+++

Unicode转义序列会在解析代码之前得到处理，如"\u0022+\u0022"只是一个空串。注释中的`\u`型符号也会被处理
[操作]()有三种不同的语法:
* 作为`中缀、前缀或后缀运算符`。 例如，a + b调用操作+ : int × int → int。
* 作为`对象的方法`。 例如，bigint1.add(bigint2)调用操作add: BigInteger × BigInteger → BigInteger。
* 作为一个`功能`。 例如，Math.sin(theta)调用操作sin: double → double。在这里，Math不是一个对象。它是包含函数的类sin。
[Static Checking]() 在运行前检查bug  
* [Static Typing]() 在编译时检查bug  

[Dynamic Checking]() 在运行时检查bug
[final]() 分配一次并且永远不会重新分配的变量
[Immutability]() immunity from change,指类型没有methods改变值,但可以重新赋值
double对除以零有一个特殊返回值POSITIVE_INFINITY，因此当您将数除以零时它会返回这个值。
有小数运算时很多运算都会变成近似运算
[写java程序使用idea]()  
[java基本概念]()  
很早以前，java三大分支：javaSE、javaEE、javaME  
(Java EE 已经被改名且融入到 Java 企业级框架之中，Java SE 已经成为 Java 的同义词，而 Java ME 已经逐渐被忘记了。)
[javaSE]() Standard Edition(标准版)  
Java SE 仅指 Java 技术中的基础部分，但这是一个历史遗留的概念，在很多有年代的文章中常常出现。现在不要使用这个名词了，直接使用 Java 一词即可。所以，当读者认为自己学会 Java 的时候，不要高兴得太早，这只是学完了 Java 中最基础的部分。
[JDK]() Java Development Kit(java开发工具包)  
如果不进行严格的区分，可以认为 JDK 与 Java SE 是一种等价的概念。很早以前，Java 中还有一个 JRE（Java Runtime Environment，Java 运行环境）的概念，而现在 JRE 已被合并到 JDK 中了。
[javaEE]() Enterprise Edition(企业版)  
Web 容器已经内置了 Java EE 的开发工具包。2018年，Java EE 改名为 Jakarta EE。
[javaME]()
Micro Edition  
java ME 曾经在移动设备和嵌入式设备上使用。值得一提的是，虽然安卓属于嵌入式设备，且安卓开发大多使用 Java。但安卓开发中使用的 Java 并不是 Java ME。现在，在 Java 的相关流行技术中，Java ME 早已销声匿迹，成为时代的眼泪。
[java创始人]() Gosling  
[java的健壮性]() java的强类型机制、异常处理、垃圾自动收集是它的保障  
[java的跨平台型]() 编译后的文件(.class)可直接分别在linux、windows系统下运行  
 
[常见错误]() 
* 语法错误:
    * 相似字符混淆
    * 中英字符错误
    * 拼写错误
* 业务错误
* 环境错误  
$$字符编码表\left\{
\begin{array}{lcl}
ASCII: 128个字符\\
Unicode：统一两字节\\
utf-8：字母一字节，汉字三字节\\
gbk：字母一字节，汉字二字节\\
gb2312：<gbk\\
big5:繁体中文，香港，台湾
\end{array} \right.$$
[dos]()`Disk Operating System`
`boolean`,布尔类型,不可用0或1代替.
[自动类型转换]() char`->`P; byte`->`short`->`P  
P： int`->`long`->`float`->`double  
`byte` `short` `char`在参与运算时会自动转换为`int`  
[强制类型转换]() 符号()
[取模运算]() a%b =a-a/b*b  
[逻辑与`&&`和短路与`&`的区别]() 除了后者会发生短路现象外，没什么区别，同逻辑或`||`和短路或`|`
[jshell]() Read-Eval-Print Loop工具。
[const]()是java保留字，但并没有使用
[final]()指示常量，相当于C++中的const  
`import static java.lang.Math.*;`  
就可以不必在数学方法名前添加前缀Math了，即[静态导入]()
[break标签]() 
```
label1:
for(int i =0;i<n;i++){
    label2:
    for(int j =0;j<n;j++){
        break label1;//退出双重循环
    }
}
```
[嵌套定义]()在C++中，可以在嵌套的块中重定义一个变量。在内层定义的变量会覆盖
在外层定义的变量。这就有可能带来编程错误，因此Java中不允许这样做。
[浮点数相等判断]() 浮点数是否相等，需要有一个相等的精度，浮点数是无法在计算机中精准储存的
[泛型for循环]()
java没有提供运算符重载功能
`Objects.equals()`
`String`使用`charAt()`访问单个字符
[Nested Classes]()`嵌套类`  
Static nested classes, inner classes, anonymous inner classes, local classes, and lambda expressions 
[javap]() 是 JDK`Java Development Kit`中的一个工具，它用于反编译 Java 字节码文件。
[backwards compatibility]()是指软件系统在进行更新或升级时，能够与先前版本的接口、协议或数据格式保持兼容，而不破坏现有功能或导致现有代码无法正常运行的特性。
当某个变量没有被引用时，会被GC处理

[Spring Boot]()  

POM poroject object model
