class Solution {
public:
    vector<int> t;
    vector<vector<int>> ans;

    void search_ans(int pos, int n, int k) {
        if(t.size() == k){
            ans.push_back(t);
            return;
        }

        if(n - pos + 1 + t.size() < k) return;

        t.push_back(pos);
        search_ans(pos+1, n, k);
        t.pop_back();
        search_ans(pos+1, n, k);
    }


    vector<vector<int>> combine(int n, int k) {
        search_ans(1,n,k);
        return ans;
    }
};
