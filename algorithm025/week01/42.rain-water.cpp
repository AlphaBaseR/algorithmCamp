class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 0) return 0;
        vector<int> l, r;
        int nowheight, ans = 0;

        nowheight = height[0];
        for (int i = 0; i < height.size(); i++) {
            if (height[i] > nowheight) nowheight = height[i], l.push_back(0);
            else l.push_back(nowheight - height[i]);
        }

        nowheight = height[height.size() - 1];
        for (int i = height.size() - 1; i >= 0; i--) {
            if (height[i] > nowheight) nowheight = height[i], r.push_back(0);
            else r.push_back(nowheight - height[i]);
        }
        reverse(r.begin(), r.end());

        for (int i = 0; i < height.size(); i++) {
            ans += min(l[i], r[i]);
        }
        return ans;
    }
};