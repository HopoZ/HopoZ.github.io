---
date: 2025-02-19 01:33:56
timeline: article
title: 大模型初探
categories: daily
tags:
  - 大模型
toc: true
---

# 大模型
## 训练
有监督学习，无监督学习，强化学习
### 预训练
监督微调来使其遵循人类的指示进行回答，而不是强行补全
基于人类反馈的强化学习优化回答

NLP的LLM+多模态
## 大模型的工作流程
分词化(西文一般分词，中文一般分字符)，生成token
# agent
在LLM基础上加入记忆化，自主决策，自主强化学习，使用api等功能
## agent决策流程
感知->规划->行动->观察
1. 推理:基于已有知识进行推理
2. 行动：使用工具(如搜索工具)收集海量资料
3. 记忆:
