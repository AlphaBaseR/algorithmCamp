class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five, ten;
        five = ten =0;
        for(int i = 0; i < bills.size(); i++) {
            if(bills[i] == 5) five++;
            else if(bills[i] == 10) {
                ten++;
                five--;
            }
            else if(bills[i] == 20) {
                if(ten > 0) {
                    ten--;
                    five--;
                }
                else five -= 3;
            }
            if(ten < 0 || five < 0) return false;
        }
        return true;
    }
};