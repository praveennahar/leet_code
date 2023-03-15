/*20. Valid Parentheses
Easy

18455

1051

Add to List

Share
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
Accepted
3,112,074
Submissions
7,725,827
*/

/*class Solution:
    def isValid(self, s):
        while '()' in s or '[]'in s or '{}' in s:
            s = s.replace('()','').replace('[]','').replace('{}','')
        return False if len(s) !=0 else True
        */


class Solution {
public:
    bool isValid(string st) {
        stack<char> s;

    for(int i=0; i<st.length();i++){
        char ch = st[i];

        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }
        else{
          if (!s.empty()) {
            char top = s.top();

            if ((ch == ')' && top == '(') || 
                (ch == ']' && top == '[') ||
                (ch == '}' && top == '{')) {

              s.pop();
            }
            else {
              return false;
            }
          }
          else{
              return false;
          }
        }
    }

    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}    
    
};