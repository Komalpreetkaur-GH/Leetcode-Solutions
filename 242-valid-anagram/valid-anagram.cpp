class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
                return false;
            }
            unordered_map<char,int> set1;
            unordered_map<char,int> set2;
           for(char ch:s){
            set1[ch]++;
           }
           for(char ch: t){
            set2[ch]++;
           }
        return (set1==set2);
        
        
    }
};