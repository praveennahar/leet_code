class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        
        priority_queue<int,vector<int>,greater<int>> mini;
        
        for(int i=0; i<k; i++){
            mini.push(nums[i]);
        }
        
        for(int i=k; i<n; i++){
            if(nums[i] > mini.top()){
                mini.pop();
                mini.push(nums[i]);
            }
        }
        
        return mini.top();  
    }
};