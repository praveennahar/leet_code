class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int> ans;

        for(int i=0;i<n;i++){

            ans.push_back(nums[i]);

        }

        sort(ans.begin(),ans.end());

        return ans[ans.size()-k];
        
        
        
        
        
        /*priority_queue<int,vector<int>,greater<int>> mini;
        
        for(int i=0; i<k; i++){
            mini.push(nums[i]);
        }
        
        for(int i=k; i<n; i++){
            if(nums[i] > mini.top()){
                mini.pop();
                mini.push(nums[i]);
            }
        }
        
        return mini.top();  */
    }
};