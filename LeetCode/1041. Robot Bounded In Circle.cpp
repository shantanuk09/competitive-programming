// 45. 1041. Robot Bounded In Circle
// Mathematics.
class Solution{
public:
    bool isRobotBounded(string instructions){
        // Starting position.
        int x = 0, y = 0;
        int index = 0;
        // Up, right, down & left.
        int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        for(char c  : instructions){
            if(c == 'L') index = (index + 3) % 4;
            else if(c == 'R') index = (index + 1) % 4;
            else x += directions[index][0], y += directions[index][1];
        }
        return ((x == 0 && y == 0) || index != 0); 
    }
};
