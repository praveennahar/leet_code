class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        for (int i = 0 ; i < nums.size() - 1 ; i ++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true ; 
            }
        }
        return false ; 
    }
};



/*class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        
        for(auto x: nums){
            st.insert(x);
        }
        
        if(n == st.size()){
            return false;
        }
        return true;
    }
};*/