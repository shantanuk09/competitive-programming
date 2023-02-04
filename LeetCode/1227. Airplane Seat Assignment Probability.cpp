// LeetCode 1227. Airplane Seat Assignment Probability
class Solution{
public:
    double nthPersonGetsNthSeat(int n){
        return (n == 1) ? 1 : 0.5;
    }
};