class Solution {
public:
    bool subPalindrome(string s, int p, int q) {
        while(p < q) {
            if(s[p] != s[q]) return false;
            else {
                p++;
                q--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int p = 0, q = s.length() - 1;
        while(p < q){
            if(s[p] == s[q]) {
                p++;
                q--;
            } else {
                return subPalindrome(s, p + 1, q) || subPalindrome(s, p, q - 1);
            }
        }
        return true;
    }
};