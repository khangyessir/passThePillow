class Solution {
public:
    int passThePillow(int n, int time) {
        int route = (n - 1) * 2;
        int optimalTime = time % route;
        if(optimalTime < n - 1){
            return 1 + optimalTime;
        } else{
            return n - (optimalTime - (n - 1));
        }
    }
};
