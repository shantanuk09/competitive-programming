// LeetCode 1344. Angle Between Hands of a Clock
class Solution{
public:
    double angleClock(int hour, int minutes){
        double hourAngle = (hour * 30) + (minutes / 60.0 * 30);
        double minuteAnge = minutes * 6;
        if(hourAngle > 360) hourAngle -= 360;
        return min(360 - abs(hourAngle - minuteAnge), abs(hourAngle - minuteAnge));
    }
};