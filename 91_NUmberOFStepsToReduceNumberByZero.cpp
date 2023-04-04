//1342

class Solution {
public:
    int numberOfSteps(int num) {
        if(num == 0 || num == 1) return num;
        int ans = 0;
        
        while(num){
            if(num%2 == 0) num = num/2;
            else num = num-1;
            ans++;
        }
        return ans;
    }
};