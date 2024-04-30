/***
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-21 20:02:48
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-21 20:26:03
 * @FilePath: \computer\algoBase\排序.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;
//* 冒泡排序 bubble sort
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

//*选择排序 selection sort
void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }
    swap(arr[i], arr[min_index]);
  }
}

//*插入排序 insertion sort
void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

//*快速排序
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = (low - 1);
  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return (i + 1);
}
//*归并排序 merge sort
void merge(int arr[], int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  // 创建临时数组
  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  // 合并临时数组回原数组
  int i = 0;
  int j = 0;
  int k = l;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // 复制剩余的元素
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

//*堆排序 heap sort
void heapify(int arr[], int n, int i) {
  int largest = i;        // 初始化为根节点
  int left = 2 * i + 1;   // 左子节点
  int right = 2 * i + 2;  // 右子节点

  // 如果左子节点大于根节点
  if (left < n && arr[left] > arr[largest])
    largest = left;

  // 如果右子节点大于根节点
  if (right < n && arr[right] > arr[largest])
    largest = right;

  // 如果根节点不是最大值，交换它们
  if (largest != i) {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapSort(int arr[], int n) {
  // 构建最大堆
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  // 一个个提取元素
  for (int i = n - 1; i > 0; i--) {
    swap(arr[0], arr[i]);
    heapify(arr, i, 0);
  }
}

int main() {
  return 0;
}