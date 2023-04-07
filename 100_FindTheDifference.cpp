class Solution {
public:
    char findTheDifference(string s, string t) {
        s+=t; int c=0;
        for(auto x: s)
        {
            c^=x; // a^a = 0 and a^a^a = a
        }
        return c;
    }
};