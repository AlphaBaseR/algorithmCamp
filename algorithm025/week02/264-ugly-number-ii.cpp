#define ll long long

class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<ll, vector<ll>, greater<ll>> heap;
        unordered_set<ll> vis;
        ll nums[] = {2,3,5};
        ll ans;

        heap.push(1);
        vis.insert(1);

        for(int i = 0; i < n; i++) {
            ans = heap.top();
            heap.pop();

            for(int i = 0; i < 3; i++){
                ll t = ans * nums[i];
                if(!vis.count(t)) {
                    heap.push(t);
                    vis.insert(t);
                }
            }
        }

        return (int)ans;
    }
};
