#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    /*int search(vector<int>& nums, int target) {
        //method one:4s-16s
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=target==nums[i]?1:0;
        }
        return ans;
        
    }
    int search(vector<int>& nums, int target) {
        //method two:12s
        int i=0,j=nums.size()-1,mid=0,ans=0;
        if( j<0 ) return ans;
        while(i<=j){
            mid = (j-i)/2+i;
            if(nums[mid]>target)j=mid-1;
            else if(nums[mid]<target)i=mid+1;
            else break;
        }
        int l=mid,r=mid+1;
        while(l>=0&&nums[l]==target){
            ans++;
            l--;
        }
        while(r<nums.size()&&nums[r]==target){
            ans++;
            r++;
        }
        return ans;  
    }
    */
   int search(vector<int>& nums, int target) {
        //method three:8-16s
        int i=0,j=nums.size()-1,mid=0;
        while(i<=j){
            mid = (j-i)/2+i;
            if(nums[mid]>=target)j=mid-1;
            else i=mid+1;
        }
        int r =i;
        i=0,j=nums.size()-1,mid=0;
        while(i<=j){
            mid = (j-i)/2+i;
            if(nums[mid]>target)j=mid-1;
            else i=mid+1;
        }
        int l=i;
        return l-r;  
    }
};
