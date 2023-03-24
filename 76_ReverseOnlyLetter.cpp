class Solution {
private:
    bool checkChar(char ch){
        int c = int(ch);
        // cout<<c<<"  ";
        if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
            return true;
        }
        return false;
        
    }
    
    
public:
    string reverseOnlyLetters(string s) {
        int start = 0;
        int end = s.length()-1;
        int temp;
        
        while(start<end){
            if(checkChar(s[start]) && checkChar(s[end])){
                temp = s[start];
                s[start] = s[end];
                s[end] = temp;
            
                start++;
                end--;
            }
            else if(!checkChar(s[start])){
                start++;
            }
            else if(!checkChar(s[end])){
                end--;
            }
            
        }
        return s;
    }
};