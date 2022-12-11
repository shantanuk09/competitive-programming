// LeetCode 881. Boats to Save People
// Two Pointer.
class Solution{
public:
    int numRescueBoats(vector<int>& people, int limit){
        int n = people.size();
        int left = 0, right = n - 1;
        int count = 0;
        sort(people.begin(), people.end());
        while(left < right){
            if(people[left] + people[right] <= limit) left++, right--;
            else right--;
            count++;
        }
        return count + (left == right);
    }
};
