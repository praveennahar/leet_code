class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        int zero = 0;
        int one = 0;
        int two = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i] == 0) zero++;
            else if(nums[i] == 1) one++;
            else if(nums[i] == 2) two++;
        }
        
        for(int j=0; j<n; j++){
            if(zero > 0){ 
                nums[j] = 0;
                zero--;
            }
            else if(one > 0){ 
                nums[j] = 1;
                one--;
            }
            else if(two > 0){ 
                nums[j] = 2;
                two--;
            }
        }
    }
};