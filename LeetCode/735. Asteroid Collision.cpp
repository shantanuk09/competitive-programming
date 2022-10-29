// LeetCode 735. Asteroid Collision
// Stack.
class Solution{
public:
    vector<int> asteroidCollision(vector<int>& asteroids){
        int asteroid1, asteroid2;
        vector<int> vr;
        for(auto asteroid : asteroids){
            vr.push_back(asteroid);
            while(vr.size() >= 2 && vr[vr.size() - 1] < 0 && vr[vr.size() - 2] > 0){
                asteroid1 = vr.back(), vr.pop_back();
                asteroid2 = vr.back(), vr.pop_back();
                if(abs(asteroid1) > abs(asteroid2)) vr.push_back(asteroid1);
                else if(abs(asteroid1) < abs(asteroid2)) vr.push_back(asteroid2);
            }
        }
        return vr;
    }
};