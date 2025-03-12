---
date: 2025-03-10 15:42:24
timeline: article
title: Spring
categories: base
tags:
  - java
  - Spring
  - SpringBoot
toc: true
---
# Spring
IoC(Inversion of Control)是把创建对象的权力交给第三方，最常见以及最合理的实现方式叫做依赖注入（Dependency Injection，简称 DI）。

AOP(Aspect Oriented Programming)将横切关注点（如日志记录、事务管理、权限控制、接口限流、接口幂等等）从核心业务逻辑中分离出来。
Spring事务
# 设计模式
## 工厂模式
封装对象创建逻辑的方法
```java
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.FileSystemXmlApplicationContext;

public class App {
  public static void main(String[] args) {
    ApplicationContext context = new FileSystemXmlApplicationContext(
        "<yourPath>/src/main/resources/bean-factory-config.xml");

    HelloApplicationContext obj = (HelloApplicationContext) context.getBean("helloApplicationContext");
    obj.getMsg();
  }
}
```
这段代码使用了工厂模式来管理Bean的创建和依赖注入

## 单例模式
不能犯重婚罪的类(手动狗头)
```java
private final Map<String, Object> singletonObjects = new ConcurrentHashMap<String, Object>(64);
```

## 代理模式
为某个对象提供一个代理，以控制对该对象的访问。代理模式可以用于增强功能、延迟加载、权限控制、日志记录等场景。
```java
//EXP jdk动态代理
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

// 1. 定义接口
interface Service {
    void perform();
}

// 2. 真实业务类
class RealService implements Service {
    @Override
    public void perform() {
        System.out.println("执行真实业务逻辑...");
    }
}

// 3. 动态代理类
class DynamicProxyHandler implements InvocationHandler {
    private Object target;

    public DynamicProxyHandler(Object target) {
        this.target = target;
    }

    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
        System.out.println("日志：调用方法 " + method.getName());
        Object result = method.invoke(target, args);
        System.out.println("日志：方法执行完毕");
        return result;
    }
}

// 4. 测试
public class JDKDynamicProxyDemo {
    public static void main(String[] args) {
        // 创建真实对象
        RealService realService = new RealService();

        // 创建代理对象
        Service proxyInstance = (Service) Proxy.newProxyInstance(
            realService.getClass().getClassLoader(),
            new Class[]{Service.class},
            new DynamicProxyHandler(realService)
        );

        // 调用代理方法
        proxyInstance.perform();
    }
}
```

## 模板模式
定义一个操作中的算法的骨架，而将一些步骤延迟到子类中。有点cpp虚拟函数的味道了
```
@Override
```

## 观察者模式
表示的是一种对象与对象之间具有依赖关系，当一个对象发生改变的时候，依赖这个对象的所有对象也会做出反应。
```java
package org.springframework.context;
import java.util.EventListener;
@FunctionalInterface
public interface ApplicationListener<E extends ApplicationEvent> extends EventListener {
    void onApplicationEvent(E var1);
}
```
## 适配器模式
将一个接口转换成客户希望的另一个接口，适配器模式使接口不兼容的那些类可以一起工作。
就是中间层那个味儿~
```java
// JDBC 统一标准
public interface DatabaseDriver {
    void connect(String url, String user, String password);
    void executeQuery(String sql);
}
```
## 装饰器模式
不修改原有对象的基础上，动态地给一个对象添加一些额外的职责。
```java
class Car { }
class TurboDecorator extends Car { }  // 仅增强涡轮
class SeatDecorator extends Car { }  // 仅增强座椅
class SoundDecorator extends Car { }  // 仅增强音响
Car myCar = new SoundDecorator(new SeatDecorator(new TurboDecorator(new Car())));
```
可以穿很多层衣服，和继承还是有区别的，它是组合关系。

# SpringBoot
SpringBoot自动装配，简化了配置文件，提供了很多starter，可以快速搭建项目。

# 杂记

MyBatis