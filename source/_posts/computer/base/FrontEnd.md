---
date: 2024-01-20 23:18:26
timeline: article
title: 前端语法
categories: base
tags:
  - html
toc: true
---

# [标题heading]()

<h1>主标题</h1>
<h2>顶层标题</h2>
...(递推)
# [段落paragraph]()

<p>这是一个段落</p>
<p>这是另一个段落</p>
# [列表list]()
* 无序列表`unordered lists`
    <ul>
        <li>豆浆</li>
        <li>油条</li>
    </ul>

* 有序列表`ordered lists`
    <ol>
        <li>豆浆</li>
        <li>油条</li>
    </ol>
* 定义列表(标题和描述文本)`definition lists`
    <dl>
        <dt>豆浆<dt>
        <dd>很好喝<dd>
        <dt>油条<dt>
        <dd>很好吃<dd>
    </dl>
# [超链接anchor]()
<a href="vim.ipynb">vim指南</a>

<center> <img src="/picture/Snipaste_2023-03-03_17-04-40.png" height="300" width="600"></center>
# [表格table]()
<table border="1">
    <tr> table row
        <th>table head</th>
        <th>性别</th>
        <th>邮箱</th>
    </tr>
    <tr>
        <td>table data</td>
        <td>男</td>
        <td>神秘邮箱</td>
    </tr>
    <tr>
        <td>那个男人</td>
        <td>男</td>
        <td>宝藏邮箱</td>
    </tr>

</table>
# [常用元素和其他元素]()
* 内联元素(inline element):
<p>Hello,<span style="color:#FF0000">Trump</span>!</p>


* 块级元素(block element):
<div style="color:#FF0000">
    <h3>This is a header</h3>
    <p>This is a paragraph.</p>
</div>


* 音频(audio)


* 视频(video)


* 画布(canvas)


* 矢量图(svg)


# [表单form]()
<form action="hello.php" method="post">
    First name:<br>
    <input type="text" name="firstname" value="Donald" /><br>
    Last name:<br>
    <input type="text" name="lastname"  value="Trump" /><br>
    <input type="submit" value="Submit" />
</form>

别点这里的Submit，会发生未知的事
input的元素(=""里的内容)
|          |                |          |
| -------- | -------------- | -------- |
| text     | password       | radio    |
| checkbox | button         | hidden   |
| submit   | reset          | datalist |
| number   | date           | color    |
| range    | month          | week     |
| time     | datetime-local |
| emaiL    | search         | tel      |
| url      |
# 一些标签
* button
* select和option
* label textarea
* frame和frameset
* iframe
*  output

```
if(true){
    var a =5; //非块作用域
    let b =5;//现在推荐使用let定义变量
}
console.log(a);//输出5
consol.log(b);//ReferenceError
```
[自闭合标签]() 这是<br/>换行标签