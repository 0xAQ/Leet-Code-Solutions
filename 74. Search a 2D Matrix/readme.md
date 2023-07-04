# 74. [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/description/)
```diff
!Medium
```

You are given an m x n integer matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

### Example 1:
![image](https://github.com/0xAQ/Leet-Code-Solutions/assets/88236255/82176e7c-0dde-43c2-a30b-34aaa31c2d32)
```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
```
### Example 2:
![image](https://github.com/0xAQ/Leet-Code-Solutions/assets/88236255/4529e877-336c-4f94-ad1a-3a5aed1a9785)
```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
```
