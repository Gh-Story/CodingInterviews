#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
class Solution {
public:
    //method one 204-212ms
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<bool> record(target+1,false);
        for(int i=0;i<nums.size();i++){
            if(record[target-nums[i]]){
                return {nums[i],target-nums[i]};
            }
            record[nums[i]]=true;
        }
        return {-1,-1};
    }
    //method two 600ms-608ms
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(map[target-nums[i]]&&map[target-nums[i]]!=i+1){
                return {nums[i],target-nums[i]};
            }
            map[nums[i]]=i+1;
        }
        return ans;
    }
    //method three 188ms-204ms
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int sum = target-1;
        while(left < right){
            sum = nums[left]+nums[right];
            if(sum > target) right--;
            else if(sum < target) left++;
            else return {nums[left],nums[right]};
        }
        return {};
    }
};