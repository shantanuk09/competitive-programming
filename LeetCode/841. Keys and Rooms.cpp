// LeetCode 841. Keys and Rooms
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int room;
        unordered_set<int> roomSeen = {0};
        stack<int> st;
        st.push(0);
        while(!st.empty()){
            room = st.top();
            st.pop();
            for(auto r : rooms[room]){
                if(roomSeen.count(r) == 0){
                    st.push(r);
                    roomSeen.insert(r);
                    if(roomSeen.size() == rooms.size()) return true;
                }
            }
        }
        return roomSeen.size() == rooms.size();
    }
};

// Alternate solution.
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int room;
        queue<int> qe;
        unordered_set<int> roomsVisited = {0};
        qe.push(0);
        while(!qe.empty()){
            room = qe.front();
            qe.pop();
            for(auto r : rooms[room]){
                if(roomsVisited.count(r) == 0){
                    qe.push(r);
                    roomsVisited.insert(r);
                    if(roomsVisited.size() == rooms.size()) return true;
                }
            }
        }
        return roomsVisited.size() == rooms.size();
    }
}; 