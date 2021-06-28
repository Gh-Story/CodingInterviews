#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int n=0;
        for(int num :nums){
            n ^=num;
        }
        int first = 1;
        while((n & first)==0){
            first<<=1;
        }
        int x=0 , y=0;
        for(int num : nums) {       // 3. 遍历 nums 分组
            if(num & first) x ^= num;   // 4. 当 num & m != 0
            else y ^= num;          // 4. 当 num & m == 0
        }
        return {x,y};
    }
};
/*
一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。请写程序找出这两个只出现一次的数字。要求时间复杂度是O(n)，空间复杂度是O(1)。
输入：nums = [4,1,4,6]
输出：[1,6] 或 [6,1]


输入：nums = [1,2,10,4,1,4,3,3]
输出：[2,10] 或 [10,2]

2 <= nums.length <= 10000
*/