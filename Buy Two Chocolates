class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int x = INT_MAX,y = INT_MAX;
        for(auto &i: prices){
            if(x>i){
                y = x;
                x = i;
            }else if(y>i){
                y = i;
            }
        }
        if(x+y>money)return money;
        return money-x-y;
    }
};
