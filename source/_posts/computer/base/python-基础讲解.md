---
date: 2025-01-20 23:18:26
title: Python基础讲解
categories: base
tags:
  - python
toc: true
timeline: article

---

# 基础知识

```python
s = "Hello, World!"

#EXP 打印数据类型 type() 查看的是数据的类型。变量(如"Hello, World!")是字面量，本身无类型，存储它的数据(如s)有类型
print(type(s))

#EXP 数据类型转换 int() float() str()
strM="11"

#strM里如果不是全是数字int()方法会发生错误
num_str=int(strM)
print(type(num_str),num_str)

float_str=float(strM)
print(type(float_str),str)

str2=str(num_str)
print(type(str2),str2)

#EXP 运算符 通用不用说。 /除 //整除 **指数 这是和C++,java不一样的。 赋值运算符也和C++，java一样

#EXP 字符串
s1='qwer'
s1="qwer"
s1="""q
w
e
r""" #三引号方式可以换行;如果没有变量接受这个三引号方式的字符串，就会被视为注释
print('-------------------------')

#EXP 字符串拼接 字符串格式化
s2="test%s"%s #使用%占位符
print('s2:'+s2)
s2=f"test{s}" #使用f"{}"
print('s2:'+s2)

s3="test%s %d"%(s,num_str)
print('s3:'+s3)
s3="test%s %s"%(s,num_str)#相当于发生了隐式转换int->string
print('s3:'+s3)

#EXP 格式化的精度控制 m.n m控制宽度，n控制小数位数
float_num=1.234
print('f:%6.2f' % float_num)

#EXP 输入
name=input("Tell me who are you\n") #input返回的是字符串类型
print(f"you are {name}")

#EXP 判断语法
if 10>11:
    print("10>11")
elif 10>9:
    print("10>9")
else:
    print("10<9")

i =0
while i<100:
    i+=1
    if i%2==0:
        continue
    print(i)

#EXP for循环的语法
name = 'abcd'
for i in name:
    print(i)

#EXP range()函数
for i in range(5):
    print(i)
for i in range(1,5):
    print(i)
for i in range(1,5,2):
    print(i)

#EXP 基础方面其余没什么与C++，java不一样的地方了
print('-------------------------')

#EXP 函数
def my_len(data):#默认是形参，按值引用
    """
    这是一个计算字符串长度的函数
    :param data: 字符串
    :return: 字符串长度
    """ #这是函数的文档注释，可以通过help(my_len)查看
    length=0
    for i in data:
        length+=1
    return length# 如果没有return语句，函数默认返回None，类型是NoneType,在if语句中会被视为False

s4 ="qwert"
print(my_len(s4))
help(my_len) #help()查看函数文档及函数定义位置


#EXP 数据容器:列表list、元组tuple、字典dict、集合set

# list
list1=[1,2,3,4]
nestedList=[1,2,3,[4,5,6]]
# 下标访问
print(list1[-1])#-1表示最后一个元素
# print(list1[6])#如果下标越界，会报错ValueError: list index out of range
index = list1.index(3)#index()方法查找元素的下标

# 追加元素
list1.append(5)#append()方法在列表末尾添加一个元素
list1.extend([6,7])#extend()方法在列表末尾添加一个列表

# 删除元素
list1.remove(7)# remove()方法删除指定元素,会删除第一个匹配的元素
del list1[0]# del语句删除指定下标的元素
element = list1.pop(2)# pop(index)方法删除指定下标的元素,并且返回删除的元素

# count()方法统计元素出现的次数
print(list1.count(1))

# 其余方法和C++，java的语法类似，clear等

# 元组tuple是不可修改的list
tuple1 =(1,) # 如果只有一个元素，这个逗号必须有,否则类型不是tuple了

# 字符串也是不可修改
s5="123"
# s5[1]='9'#报错

# replace()
s5="Hello Niko and Niko's gun"
s6 = s5.replace("Niko","Simple")
print(s6)

# split()
s6 = s5.split(" ")
print(s6)

# strip()
s5 = "12Zywoo21"
s6 = s5.strip("12")
print(s6)

s5 = "  12Zywoo21  "
s6 = s5.strip()
print(s6)

# count() len() 没什么好说的

#EXP 切片 [开始:结尾:步长] 步长为负数表示反向
list1 = [1,2,3,4,5,6]
temp = list1[1:4]

#EXP 集合set 是无序的

set1 =set() # 空集合
set1 ={1,2,3,4,5,6}
temp = set1.pop() #随机取一个元素

set2 ={1,2,3,4,5,6}
set1.difference(set2)

set2.difference_update(set1) # set2去除交集

maxIndex =max(set2)

set1 ={1,2}
set2 ={3,4}
set3 = set1.union(set2)

#EXP 字典dict(就像C++的unordered_map) 存储键值对 可以嵌套(像json了，哈哈)
dict1 ={} # 空字典
dic1 = dict() # 空字典

dict1={"name":"niko", "age":18}
dict1["height"] =180
temp = dict1.keys()

#EXP 容器间可相互转换，就像使用构造函数

#EXP sorted()排序，返回列表，可以加一个reverse=True参数
print()



#EXP 函数的多返回值
def test():
    return 1,2,3
x,y,z = test()

print()

#EXP 函数参数

#位置参数，根据函数参数位置传递参数
#关键字参数，使用key=value形式传参
#default参数，不传默认有值
#不定长参数 (会把参数合并为一个元组传入) *args参数个数不定长 **args进一步限定了参数必须是键值对形式
def test(**args):
    return 1,2,3
x,y,z = test()

#函数作为参数传递

#EXP 匿名函数 lambda 参数:处理 函数体只能写一行代码



```

# 文件io

```python

#EXP 文件io
f =open('./source/test.txt','r+',encoding='UTF-8') # read write append对于三种文件权限 w会清空在重写 a指针在最后开始。加上+表示同时读取
a = f.read(5) #不带参数表示读取全部内容
print("a:",a)
b = f.readline()
print("b:",b)
c = f.readlines()
print("c:",c)

for line in f:
    print("for循环法",line.strip())


with open('./source/test.txt','r',encoding='UTF-8') as fileWith:
    print("这里的不需要close方法，出了代码块自动解除文件占用")

f.write("Hello")
f.flush() #这个会刷新文件，真正写入硬盘
f.close()
```

# 模块、包管理,定义与导入

```python

#EXP 导入包/模块
#这些很基础，很好理解
import time as t
from time import sleep
from time import *


```

```py
# __init__.py这个文件是包必需品,空着也得有，按理要在这里处理包内模块的管理
```

一个示例模块

```py
def myAdd(x,y):
    print("my add func run")
    return x+y

if __name__ == '__main__': #防止测试代码在包被引用时自动执行
    myAdd(1,2)
__all__ =['myAdd'] #规定*代表的内容
```

# 异常

```py

#EXP 异常处理

#try except [else] [finally]关键字来处理，java里是try{}catch{}finally{}，没有else逻辑

#捕获指定异常
try:
    print(name)
except (NameError,ZeroDivisionError) as e: # Exception为异常顶级父类
    print(NameError,ZeroDivisionError)
else:
    print("没有异常")
finally:
    print("最后的处理")

#EXP 异常的传递性 函数本层未主动捕获异常会自动抛给上一层函数


```

