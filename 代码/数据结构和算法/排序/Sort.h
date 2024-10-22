#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "Stack.h"

void PrintArray(int* a, int n);  // 打印数组
void Swap(int* px, int* py);  // 两数交换
void AdjustDown(int* a, int n, int parent);  // 向下调整算法
int GetMeIndex(int* a, int left, int right);  // 三数取中
int Partition1(int* a, int left, int right);  // 分区算法（hoare版本）
int Partition2(int* a, int left, int right);  // 分区算法（挖坑版本）
int Partition3(int* a, int left, int right);  // 分区算法（前后指针版本）
void _MergeSort(int* a, int* tmp, int left, int right);  // 合并左右两半部分进行排序

void InsertSort(int* a, int n);  // 插入排序 时间复杂度O(N^2) 空间复杂度O(1) 稳定
void ShellSort(int* a, int n);  // 希尔排序 时间复杂度O(N^1.3) 空间复杂度O(1) 不稳定

void SelectSort(int* a, int n);  // 选择排序 时间复杂度O(N^2) 空间复杂度O(1) 不稳定
void HeapSort(int* a, int n);  // 堆排序 时间复杂度O(N*logN) 空间复杂度O(1) 不稳定

void BubbleSort(int* a, int n);  // 冒泡排序 时间复杂度O(N^2) 空间复杂度O(1) 稳定
void QuickSort(int* a, int left, int right);  // 快速排序 时间复杂度O(N*logN) 空间复杂度O(logN) 不稳定
void QuickSortNonR(int* a, int left, int right);  // 快速排序非递归版本

void MergeSort(int* a, int n);  // 归并排序 时间复杂度O(N*logN) 空间复杂度O(N) 稳定
void MergeSortNonR1(int* a, int n);  // 归并排序非递归版本一
void MergeSortNonR2(int* a, int n);  // 归并排序非递归版本二

void CountSort(int* a, int n);  // 计数排序 时间复杂度O(max(N, range)) 空间复杂度O(range) 不稳定