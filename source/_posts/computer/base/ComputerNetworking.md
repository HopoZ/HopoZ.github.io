---
title: ComputerNetworking
categories: base
tags:
  - Computer Networking
toc: true
---

# [Application Layer]()
# [Computer Networking]()
# [Security in Computer Networks]()
# [The Link Layer and LANs]()
# [The Network Layer-Control Plane]()
# [The Network Layer-Data Plane]()
# [Transport Layer]()
网关，五元组`--`交换机，mac地址
# [Wireless and Mobile Networks]()
# 中文
# 缩写大全
[CIDR]()  Classless Inter-Domain Routing
`TCP`：Transmission Control Protocol，传输控制协议。
`IP`：Internet Protocol，互联网协议。
`HTTP`：Hypertext Transfer Protocol，超文本传输协议。
`SMTP`：Simple Mail Transfer Protocol，简单邮件传输协议。
`POP`：Post Office Protocol，邮局协议。
`IMAP`：Internet Mail Access Protocol，互联网邮件访问协议。
`SSL`：Secure Sockets Layer，安全套接层。
`VPN`：Virtual Private Network，虚拟专用网络。
`WAN`：Wide Area Network，广域网。
`LAN`：Local Area Network，局域网。
`MAN`：Metropolitan Area Network，城域网。
`DHCP`：Dynamic Host Configuration Protocol，动态主机配置协议。
`ICMP`：Internet Control Message Protocol，Internet控制报文协议。
`ARP`：Address Resolution Protocol，地址解析协议。
`VLAN`：Virtual Local Area Network，虚拟局域网。
`OSP`：Open Shortest Path First，开放式最短路径优先。
`BGP`：Border Gateway Protocol，边界网关协议。
`RIP`：Routing Information Protocol，路由信息协议。
`QoS`：Quality of Service，服务质量。
`VoIP`：Voice over Internet Protocol，网络语音协议。
`CDN`：Content Delivery Network，内容分发网络。
`SIP`：Session Initiation Protocol，会话发起协议。
`SNMP`：Simple Network Management Protocol，简单网络管理协议。
`ICMPv6`：Internet Control Message Protocol version 6，Internet控制报文协议第6版。
[PDU]() Protocol Data Unit 协议数据单元
[MTU]()  Maxium Transport Unit 最大传输单元
`CRC` Cyclic redundancy check 循环冗余检查
[DSL]()  digital subscriber line
[RFC]()  request for comments
[NAT]()  Network Address Translation
[前导码（Preamble）]()  :
        包含7个字节，由10循环组成，每个字节内容都是：10101010,作用是在发送方和接收方之间进行时钟同步
[帧开始界定符（SFD）]()  :
        长度为1字节，内容为 10101011，这段代码的意思是通知接收方，当收到11后边的内容时，不是同步信号了，是真正的数据了
通常所说的前导码包含了（Preamle和 SFD）一共8字节，但是实际是7+1，知道每个字节的作用即可。
[TCP/IP]()  Internet protocol suite
`网络接口层（Network Interface Layer）`： 这一层处理物理网络硬件和数据链路层的细节，确保数据正确地从一个设备传输到相邻设备。它与OSI模型的数据链路层和物理层相对应。

`网络层（Internet Layer）`： 该层主要负责数据包的路由和转发，将数据从源主机传输到目标主机。IP（Internet Protocol）是在这一层实现的。这对应于OSI模型的网络层。

`传输层（Transport Layer）`： 传输层提供端到端的通信，负责可靠的数据传输。TCP（Transmission Control Protocol）和UDP（User Datagram Protocol）是在这一层实现的。这对应于OSI模型的传输层。

`应用层（Application Layer）`： 应用层是与最终用户或应用程序直接交互的层次。它包括各种应用层协议，如HTTP（Hypertext Transfer Protocol）、FTP（File Transfer Protocol）、SMTP（Simple Mail Transfer Protocol）等。这对应于OSI模型的会话、表示和应用层。
[Mac]()  Media Access Control
分配给计算机网络中的网络接口的唯一标识符。它是由网络接口卡（NIC）或其他网络硬件的制造商分配的硬件地址，用于在计算机网络上进行通信。MAC地址对OSI模型的数据链路层的正常运作至关重要。
[ATM]()
Asynchronous Transfer Mode (ATM):  ATM旨在有效地在网络上传输数据，包括语音、视频和多媒体。然而，由于在大多数数据网络应用中被以太网和互联网协议（IP）等其他技术所取代，ATM在这方面的应用已经大幅减少。

[RTT]()  round trip time 往返时间
[FTP]()  file transfer protocol 文件传输协议
[SMTP]()  Simple Mail Transfer Protocol）是用于在计算机网络上传输电子邮件的协议。推式协议
[POP3]()  （Post Office Protocol version 3）是一种用于从邮件服务器接收电子邮件的协议。
[IMAP]()  （Internet Message Access Protocol）是一种用于在邮件服务器和客户端之间管理电子邮件的协议。
IMAP支持在服务器上创建文件夹（也称为邮箱或邮件目录），允许用户组织和管理邮件。这意味着邮件可以在多个设备上同步，并且在服务器上保留一份拷贝。
[MIME]()  （Multipurpose Internet Mail Extensions）是一种在互联网上广泛使用的标准，用于扩展电子邮件系统以支持文本以外的各种数据格式，如图像、音频、视频等。
[DNS]()  使用分层的DNS服务器实现了记录主机名与主机IP地址映射关系的分布式数据库，基于UDP协议工作，使用53号端口。
DNS服务器中维护的DNS资源记录表示为四元组`(Name,Value,Type,TTL)`，其中TTL`time to live`为记录有效  时间，Type为记录类型，有以下4种：
• A：描述主机名与IP地址的映射，例如(relay1.bar.foo.com,145.3.3.3,A)
• NS：描述域名与权威DNS服务器主机名映射，例如(foo.com,dns.foo.com,NS)
• CNAME：描述主机别名与规范主机名的映射，例如(foo.com,relay1.bar.foo.com,CNAME)
• MX：描述邮件服务器与规范主机名的映射，例如(foo.com,mail.bar.foo.com,MX)
[OSI/RM]()（Open Systems Interconnection/reference model）
[RDT]()
"rdt" 的缩写通常代表 "Reliable Data Transfer"，即可靠数据传输。
[全双工与半双工]()
`全双工（Full Duplex）`：

在全双工通信中，数据可以同时在两个方向上传输。这意味着设备能够同时发送和接收数据，就像两个人进行正常的电话对话一样。
通信双方可以同时说话和倾听，而且这两个操作是独立的，互不干扰。
典型的全双工通信的例子包括电话通话、对讲机以及计算机网络中的全双工模式。

`半双工（Half Duplex）`：

当一个设备发送数据时，它不能同时接收数据，反之亦然。通信的双方需要轮流进行发送和接收。
典型的半双工通信的例子包括对讲机（在按下对讲按钮时才能发送或接收）、传统的无线电通信以及一些计算机网络协议的半双工模式。
[MSS]()
`Maximum Segment Size` (最大分段大小)： 在计算机网络中，MSS 通常指的是 TCP（传输控制协议）中的一个参数，表示在一个 TCP 数据报文段中的最大有效载荷（即数据部分）的大小。这个值是在 TCP 握手时由通信的两端协商确定的，它影响着网络中数据的传输效率。
[ISN]()
Initial Sequence Number（初始序列号
[ssthresh]()
Slow Start 阈值（Slow Start Threshold）
[OSI七层参考模型]()
• `应用层`：运行网络应用程序，互相传输报文(可视作完整数据)。
• `表示层`：进行数据表示转换、压缩/解压缩、加密/解密等。
• `会话层`：建立和维护不同主机上进程对话，在数据流中插入同步点。
• `传输层`：负责端到端(进程间)完整报文数据的传输，传输的分组称为报文段，具有分段
重组、连接控制、流量控制、差错控制的功能，使用端口号对进程寻址。
• `网络层`：负责源主机到目的主机的分组交付，传输的分组称为数据报，具有路由和分组
转发的功能，使用逻辑寻址(IP地址)。
• `数据链路层`：在相邻结点间进行分组传输，传输的分组称为帧，具有流量控制和差错控
制的功能，使用物理寻址。
• `物理层`：在相邻结点间通过物理介质进行比特传输。