class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int i,n=nums.size();
        int pos=0,neg=0;

        for(i=0;i<n;i++)
        {
            if(nums[i]<0) neg++;
            if(nums[i]>0) pos++;
        }
        return max(neg,pos);
        
    }
};  