class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        while(i < s.length()){
            if(i + k > s.length()) {
                reverse(s.begin() + i, s.end());
            } else {
                reverse(s.begin() + i, s.begin() + i + k);
            }
            i = i + 2 * k;
        }
        return s;
    }
};