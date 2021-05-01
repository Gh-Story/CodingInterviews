#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
class Solution {
public:
    //method one :8ms
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int len = target/2;
        int sum=0;
        for(int i = 1 ;i<=len;i++){
            for(int j=i;;j++){
                sum+=j;
                if(sum>target){
                    sum=0;
                    break;
                }else if(sum==target){
                    tmp.clear();
                    for(int k=i;k<=j;k++){
                        tmp.push_back(k);
                    }
                    ans.push_back(tmp);
                    sum=0;
                    break;
                }
            }
        }
        return ans;
    }
    //method two: 4ms-8ms
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int len = (target-1)/2;
        int sum=0;
        for(int i = 1 ;i<=len;i++){
            for(int j=i;;j++){
                sum+=j;
                if(sum>target){
                    sum=0;
                    break;
                }else if(sum==target){
                    tmp.clear();
                    for(int k=i;k<=j;k++){
                        tmp.push_back(k);
                    }
                    ans.push_back(tmp);
                    sum=0;
                    break;
                }
            }
        }
        return ans;
    }
    //method three:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int sum = 0, len = target/ 2; 
        for (int x = 1; x <= len; ++x) {
            long long delta = 1 - 4 * (x - 1ll * x * x - 2 * target);
            if (delta < 0) {
                continue;
            }
            int delta_sqrt = (int)sqrt(delta + 0.5);
            if (1ll * delta_sqrt * delta_sqrt == delta && (delta_sqrt - 1) % 2 == 0) {
                int y = (-1 + delta_sqrt) / 2; // 另一个解(-1-delta_sqrt)/2必然小于0，不用考虑
                if (x < y) {
                    tmp.clear();
                    for (int i = x; i <= y; ++i) {
                        tmp.emplace_back(i);
                    }
                    ans.emplace_back(tmp);
                }
            }
        }
        return ans;
    }
    //method four:0ms
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int i=1;
        int j=2;
        int sum =i+j;
        while(i+j<=target){
            if(sum<target){
                j++;
                sum+=j;
            }else if(sum>target){
                sum-=i;
                i++;
            }else{
                tmp.clear();
                for(int k=i;k<=j;k++)tmp.push_back(k);
                ans.push_back(tmp);
                sum-=i;
                i++;
            }
        }
        return ans;
    }

};