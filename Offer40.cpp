/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stdlib.h>
using namespace std;
class Solution {
public:
    //first method:sort
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<k;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
   //second method
   int parttition(vector<int>&nums,int l,int r){
       int pivot =nums[l];
       while(l<r){
           while(l<r && nums[r]>=pivot)r--;
           if(l<r){
               nums[l]=nums[r];
               l++;
           }
           while(l<r&&nums[l]<=pivot)l++;
           if(l<r){
               nums[r]=nums[l];
               r--;
           }
       }
       nums[l]=pivot;
       return l;
   }
   void quickSelect(vector<int>&nums,int l,int r,int k){
       if(l>=r)return;
       int pos = parttition(nums,l,r);
       if(pos==k)return;
       else if(pos<k){
           quickSelect(nums,pos+1,r,k);
       }else{
           quickSelect(nums,l,pos-1,k);
       }
   }
   vector<int> getLeastNumbers(vector<int>& arr, int k) {
       if(arr.size()<=k)return arr;
       quickSelect(arr,0,arr.size()-1,k);
       vector<int>ans;
       ans.assign(arr.begin(),arr.begin()+k);
       return ans;
   }
   // third method
  int parttition(vector<int>&nums,int l,int r){
       int pivot =nums[l];
       while(l<r){
           while(l<r && nums[r]>=pivot)r--;
           if(l<r){
               nums[l]=nums[r];
               l++;
           }
           while(l<r&&nums[l]<=pivot)l++;
           if(l<r){
               nums[r]=nums[l];
               r--;
           }
       }
       nums[l]=pivot;
       return l;
   }
   void quickSelect(vector<int>&nums,int l,int r,int k){
       if(l>=r)return;
       int pos = parttition(nums,l,r);
       if(pos+1==k)return;
       else if(pos+1<k){
           quickSelect(nums,pos+1,r,k);
       }else{
           quickSelect(nums,l,pos-1,k);
       }
   }
   vector<int> getLeastNumbers(vector<int>& arr, int k) {
       if(arr.size()<=k)return arr;
       quickSelect(arr,0,arr.size()-1,k);
       vector<int>ans;
       ans.assign(arr.begin(),arr.begin()+k);
       return ans;
   }
};

*/