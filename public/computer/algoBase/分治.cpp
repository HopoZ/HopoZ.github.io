/*** 
 * @Author: entelechy phmath41@gmail.com
 * @Date: 2024-03-21 20:31:16
 * @LastEditors: entelechy phmath41@gmail.com
 * @LastEditTime: 2024-03-21 20:31:23
 * @FilePath: \computer\algoBase\分治.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2024 by future, All Rights Reserved. 
 */
#include<bits/stdc++.h>

using namespace std;

//*二分查找
int binarySearch(const std::vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // 如果没有找到返回-1
}

int main() {
    
    return 0;
}