#include<bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Optimal Solution Using Moore's vooting Algorithm
        
        int n = nums.size();
        int cnt = 0, ele;
        
        for(int i=0; i<n; i++){
            if(cnt == 0){
                cnt = 1;
                ele = nums[i];
            }
            else if (nums[i] == ele) cnt++;
            
            else cnt--;
        }
        
        int cnt1 = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == ele) cnt1++;
        }
        
        if(cnt1 > (n/2)) return ele;
        
        return -1;
        
        
        //Better Solution
        
        /*int n = nums.size();
        unordered_map<int,int>mpp;
        
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        
        for(auto it: mpp){
            if(it.second > (n/2)) return it.first;
        }
        
        return -1;*/
    }
};