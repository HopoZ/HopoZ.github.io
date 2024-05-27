+++
title = '{{ markdown }}'
date = 2024-03-26T14:55:58+08:00
draft = false
+++

[超链接显示名](超链接地址 "超链接title")  
图片![图片alt](../picture/Snipaste_2022-11-23_20-31-42.png "完美")  
另一种图片 <img width="50" height="30" src="../picture/Snipaste_2022-11-23_20-31-42.png" />  

一般用>的都是指随意移动位置，与上下文无关联的说明,~才是有关联的  

<font size =6>目录</font>
* [标题](#title)
* [颜色](#color)

<a id="1"></a>  树  `//定义的id不能有大写字母` 

<a id="1."></a> 树的遍历  

---
标题
# <center> 一级标题居中  <a id ="title"></a>
## 二级标题
#
各种字体  
**这是加粗的文字**  
*这是倾斜的文字*`  
***这是斜体加粗的文字***  
~~这是加删除线的文字~~  
<u>下划线</u>


>引用的内容  
列表和表格
- 列表内容
+ 列表内容
* 列表内容
1. 列表内容
2. 列表内容
3. 列表内容   

Name | Age
--------|------
|    Bob |27|
|  Alice | 23|  


| Italics   | Bold     | Code   |
| --------  | -------- | ------ |
| *italics* | **bold** | `code` |

---
字体颜色  
<a id="color"></a>
浅红色文字：<font color="#dd0000">浅红色文字：</font><br /> 
深红色文字：<font color="#660000">深红色文字</font><br /> 
浅绿色文字：<font color="#00dd00">浅绿色文字</font><br /> 
深绿色文字：<font color="#006600">深绿色文字</font><br /> 
浅蓝色文字：<font color="#0000dd">浅蓝色文字</font><br /> 
深蓝色文字：<font color="#000066">深蓝色文字</font><br /> 
浅黄色文字：<font color="#dddd00">浅黄色文字</font><br /> 
深黄色文字：<font color="#666600">深黄色文字</font><br /> 
浅青色文字：<font color="#00dddd">浅青色文字</font><br /> 
深青色文字：<font color="#006666">深青色文字</font><br /> 
浅紫色文字：<font color="#dd00dd">浅紫色文字</font><br /> 
深紫色文字：<font color="#660066">深紫色文字</font><br /> 

---
size为1：<font size="1">size为1</font><br /> 
size为2：<font size="2">size为2</font><br /> 
size为3：<font size="3">size为3</font><br /> 
size为4：<font size="4">size为4</font><br /> 
size为10：<font size="10">size为10</font><br /> 

---
各种艺术字体  
<font face="黑体">我是黑体字</font>  
<font face="宋体">我是宋体字</font>  
<font face="微软雅黑">我是微软雅黑字</font>  
<font face="fantasy">我是fantasy字</font>  
<font face="Helvetica">我是Helvetica字</font>  

---
背景色  
<table>
    <tr>
        <td bgcolor=#FF00FF>背景色的设置是按照十六进制颜色值：#7FFFD4</td>		</tr>
</table>
<table>
    <tr>
        <td bgcolor=#FF83FA>背景色的设置是按照十六进制颜色值：#FF83FA
        </td>
    </tr>
</table>
<table>
    <tr>
        <td bgcolor=#D1EEEE>背景色的设置是按照十六进制颜色值：#D1EEEE
        </td>
    </tr>
</table>
<table>
    <tr>
        <td bgcolor=#C0FF3E>背景色的设置是按照十六进制颜色值：#C0FF3E
        </td>
    </tr>
</table>
<table>
    <tr>
        <td bgcolor=#54FF9F>背景色的设置是按照十六进制颜色值：#54FF9F
        </td>
    </tr>
</table>
<table>
    <tr>
        <td bgcolor=DarkSeaGreen>这里的背景色是：DarkSeaGreen，此处输入任意想输入的内容
        </td>
    </tr>
</table>

---
空格  
例&ensp;是半角的空格，两个相当于一个中文宽度      
例&emsp;是全角的空格，占一个中文宽度  
例&nbsp;不换行空格，也是我们按下空格键产生的空格，不会累加    
例&thinsp;窄空格，一个中文字符的六分之一宽  

---
[多行大括号]() 
$$ 标题\left\{
\begin{array}{lcl}
一\\
二\\
\end{array} \right .$$
<pre>
		&#123;
			"foo": "bar",
			"baz": "qux"
		&#125;
	</pre>
$$
\textcolor{red}{\bigg\{} \quad \text{方程组内容} \quad \textcolor{red}{\bigg\}}
.$$


$$
\underbrace{\left\{ \quad \text{方程组内容} \quad \right.}_{\text{标签}}
.$$

$$\begin{cases}
\begin{aligned}
& ... \\
& ...
\end{aligned}
\end{cases}.$$