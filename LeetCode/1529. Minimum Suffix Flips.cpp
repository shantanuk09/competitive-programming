// LeetCode 1529. Minimum Suffix Flips
class Solution{
public:
    int minFlips(string target){
        int flip = 0;
        int n = target.size();
        char current = '0';
        for(int i = 0; i < n; i++){
            if(current != target[i]){
                flip++;
                if(current == '0') current = '1';
                else current = '0';
            }
        }
        return flip;
    }
};