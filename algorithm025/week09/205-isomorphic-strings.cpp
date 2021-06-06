class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> hashmap1;
        unordered_map<char, char> hashmap2;
        for(int i = 0; i < s.length(); i++) {
            if(hashmap1.count(s[i]) && hashmap1[s[i]] != t[i]){
                return false;
            } else {
                hashmap1[s[i]] = t[i];
            }
            if(hashmap2.count(t[i]) && hashmap2[t[i]] != s[i]){
                return false;
            } else {
                hashmap2[t[i]] = s[i];
            }
        }
        return true;
    }
};