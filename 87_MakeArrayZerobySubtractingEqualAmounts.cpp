
class Solution 
{
    public:
        int minimumOperations(vector<int>& nums) 
        {
            int cnt = 0, N = nums.size();
            sort(nums.begin(), nums.end());

            for(int i=0; i<N; i++)
            {
                if(nums[i] > 0)
                {
                    int num = nums[i];
                    cnt++;
                    for(int j=i; j<N; j++) nums[j] -= num;
                }
            }
            return cnt;
        }
}; 


/*class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> st;
        for(auto x:nums) 
            if(x !=0) st.insert(x);  // Logic is Number of steps is equal to Number of Unique element 
        
        return st.size();
    }
};*/