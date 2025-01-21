---
date: 2025-01-21 23:11:26
timeline: article
title: python库pyecharts可视化
categories: daily
tags:
  - python
  - pyecharts
  - 可视化
toc: true
---





代码示例:

```py
from pyecharts.charts import Line
line = Line() # 创建折线图对象
line.add_xaxis(["a","b","c"]) # 设置x轴
line.add_yaxis("y",[1,2,3]) # 设置y轴
line.render(path="./out/render.html") #渲染对象并保存为html文件
```



这是效果：
![image-20250121231446914](\picture\image-20250121231446914.png)



# 处理json的输入

看到原数据为txt文档

![image-20250121234809661](\picture\image-20250121234809661.png)

我们先手动把json提取出来存为json文件看看格式

![](\picture\Snipaste_2025-01-21_23-50-13.png)

可以在左下角outline看到格式为status,msg,data[],点击展开看到更细致的格式

![](\picture\Snipaste_2025-01-21_23-52-43.png)

那么就进行代码处理：

```py
# 读入数据
us_f = open("./resource/折线图数据/美国.txt","r",encoding="UTF-8")
us_data = us_f.read()
jp_f = open("./resource/折线图数据/日本.txt","r",encoding="UTF-8")
jp_data = jp_f.read()
in_f = open("./resource/折线图数据/印度.txt","r",encoding="UTF-8")
in_data = in_f.read()

# 规范化为json格式
us_data = us_data.replace("jsonp_1629344292311_69436(","")
us_data = us_data[:-2]
jp_data = jp_data.replace("jsonp_1629350871167_29498(","")
jp_data = jp_data[:-2]
in_data = in_data.replace("jsonp_1629350745930_63180(","")
in_data = in_data[:-2]

# json转换为python的dict
us_dict = json.loads(us_data)
jp_dict = json.loads(jp_data)
in_dict = json.loads(in_data)

# 分析获取必要信息
us_trend_data = us_dict["data"][0]["trend"]
x_data = us_trend_data["updateDate"][:314] #只取一年数据，前314个,三个国家时间一致，写一份
us_y_data = us_trend_data["list"][0]["data"][:314]

jp_trend_data = jp_dict["data"][0]["trend"]
jp_y_data = jp_trend_data["list"][0]["data"][:314]

in_trend_data = in_dict["data"][0]["trend"]
in_y_data = in_trend_data["list"][0]["data"][:314]

# 生成可视化图标

line =Line()
line.add_xaxis(x_data)
line.add_yaxis("美国确诊人数",us_y_data)
line.add_yaxis("日本确诊人数",jp_y_data)
line.add_yaxis("印度确诊人数",in_y_data)
line.render(path="./out/JSONrender.html")
```



可视化结果如下：

![](\picture\Snipaste_2025-01-22_00-31-14.png)



