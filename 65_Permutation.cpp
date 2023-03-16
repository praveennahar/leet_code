// 46. Permutations
// Medium

// 15008

// 255

// Add to List

// Share
// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// Example 2:

// Input: nums = [0,1]
// Output: [[0,1],[1,0]]
// Example 3:

// Input: nums = [1]
// Output: [[1]]
 

// Constraints:

// 1 <= nums.length <= 6
// -10 <= nums[i] <= 10
// All the integers of nums are unique.




class Solution {
    
    
private:
    
    void recurPermute(vector<vector<int>> &ans,vector<int> &ds,vector<int> &nums,int freq[]){
        
        // base case
        if(ds.size() == nums.size()){  // if size of ds(data structure) is equal than the size of nums than we got possible permutation
            ans.push_back(ds); // after we push it on in our answer
            return;
        }
        
        for(int i=0; i<nums.size(); i++){
            if(!freq[i]){               // it will check value is false or not if it is false then we enter 
                ds.push_back(nums[i]); // push value in ds
                freq[i] = 1;            // marked as visited by change the value 
                
                //recurssive call   
                recurPermute(ans,ds,nums,freq);     // recurssive call for all possible permutation
                freq[i] = 0;         // after backtrack marked is false
                ds.pop_back();         // and pop that element after backtrack
            }
        }
    }
    
public:
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;             // it will store possible permutation
        int freq[nums.size()];      // it will check the frequency that is true or false mark by this array
        for(int i=0; i<nums.size(); i++) freq[i] = 0;  // all the value initialize with zero 
        recurPermute(ans,ds,nums,freq); // recurssive call for get all possible permutation
        
        return ans;
    }
};