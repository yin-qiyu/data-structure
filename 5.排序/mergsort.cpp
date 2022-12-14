/*
 * @Author: yin-qiyu
 * @Date: 2022-08-27 16:52:28
 * @LastEditTime: 2022-09-01 14:39:25
 * @Description: 归并排序
 */
#include <iostream>
#include <vector>
using namespace std;

/**
 * @description: 
 * @param {int} arr
 * @param {int} tempArr
 * @param {int} left
 * @param {int} mid
 * @param {int} right
 * @return {*}
 */
void merge(int arr[], int tempArr[], int left, int mid, int right)
{
    // 标记左半区第一个未排序的元素
    int l_pos = left;
    // 标记右半区第一个未排序的元素
    int r_pos = mid + 1;
    // 临时数组元素的下标
    int pos = left;

    // 合并
    while (l_pos <= mid && r_pos <= right)
    {
        if (arr[l_pos] < arr[r_pos])  // 左半区第一个剩余元素更小
            tempArr[pos++] = arr[l_pos++];
        else  // 右半区第一个剩余元素更小
            tempArr[pos++] = arr[r_pos++];
    }

    // 合并左半区剩余的元素
    while (l_pos <= mid)
        tempArr[pos++] = arr[l_pos++];

    // 合并右半区剩余的元素
    while (r_pos <= right)
        tempArr[pos++] = arr[r_pos++];

    // 把临时数组中合并后的元素复制回原来的数组
    while (left <= right)
    {
        arr[left] = tempArr[left];
        left++;
    }
}


/**
 * @description: 
 * @param {int} arr
 * @param {int} tempArr
 * @param {int} left
 * @param {int} right
 * @return {*}
 */
void msort(int arr[], int tempArr[], int left, int right)
{
    // 如果只有一个元素，那么不需要继续划分
    // 只有一个元素的区域，本生就是有序的，只需要被归并即可
    if (left < right)
    {
        // 找中间点
        int mid = (left + right) / 2;
        // 递归划分左半区
        msort(arr, tempArr, left, mid);
        // 递归划分右半区
        msort(arr, tempArr, mid + 1, right);
        // 合并已经排序的部分
        merge(arr, tempArr, left, mid, right);
    }
}

/**
 * @description: 
 * @param {int} arr
 * @param {int} n
 * @return {*}
 */
void merge_sort(int arr[], int n)
{
    // 分配一个辅助数组
    int tempArr[n];
    // 调用实际的归并排序
    msort(arr, tempArr, 0, n - 1);
}


void print_arr(int a[], int n){
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);  
  }
  printf("\n");
}

int main(int argc, char const *argv[])
{
    int a[] = {49, 38, 65, 97, 76, 13, 27};
    int n = sizeof(a)/sizeof(int);
    print_arr(a, n);

    merge_sort(a, n);
    print_arr(a, n);

    return 0;
}