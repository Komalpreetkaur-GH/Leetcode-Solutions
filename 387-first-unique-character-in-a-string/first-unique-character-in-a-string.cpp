class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26]={};
       for(char ch:s){
        freq[ch - 'a']++;

       }
       for(int i=0;i<s.length();i++){
        if(freq[s[i]-'a']==1){
            return i;
        }
       }
    return -1;
        
    }
};