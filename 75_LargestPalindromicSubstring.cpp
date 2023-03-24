class Solution {
public:
    string longestPalindrome(string S) {
    int start = 0;
        int end = 1;
        
        for(int i=1;i<S.size();i++)
        {
            //even length
            int left = i-1;
            int right = i;
            while(left>=0 && right<S.size()&& S[left]==S[right])
            {
                if(right-left+1>end)
                {
                    start = left;
                    end = right-left+1;
                }

                left--;
                right++;
            }
            
            // odd length
            left = i-1;
            right = i+1;
            while(left>=0 && right<S.size()&& S[left]==S[right])
            {
                if(right-left+1>end)
                {
                    start = left;
                    end = right-left+1;
                }

                left--;
                right++;
            }

        }

        string ans = "";
        for(int i=start;i<=start+end-1;i++)  // aaaabbaa for this test case we use s+e-1
        {
            ans = ans+S[i];
        }
       
       return ans;
    }
};