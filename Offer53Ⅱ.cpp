#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    //method two 12ms
    int missingNumber(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        int mid = 0;
        while(i<=j){
            mid = (j - i) / 2 + i;
            if(nums[mid]!=mid){
                j=mid-1;
            }else if(nums[mid]==mid){
                i = mid+1;
            }
        }
        return i;
    }
    //method one:16s-20s
    int missingNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i)return i;
        }
        return nums.size();
    }
};