class Solution {
private:
    unordered_map<string,bool> mp;
    
    bool isConcatenate(string word,unordered_set<string> &st){
        
        if(mp.find(word) != mp.end()) 
            return mp[word];
        
        for(int i=0; i<word.length(); i++){
            string prefix = word.substr(0,i+1);
            string suffix = word.substr(i+1);
            
            if( (st.find(prefix) != st.end() && st.find(suffix) != st.end()) ||
                 (st.find(prefix) != st.end() && isConcatenate(suffix,st))){
                return mp[word] = true;
            }
        }
         return mp[word] = false;
    }
public:
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        mp.clear();
        
        unordered_set<string> st(begin(words),end(words));
        vector<string> res;
        
        for(int i=0;i<words.size(); i++){
            
            if(isConcatenate(words[i],st)){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};