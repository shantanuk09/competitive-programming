// LeetCode 1980. Find Unique Binary String
class Solution{
public:
    string toBinaryString(int num, int n){
        string answer;
        while(num){
            answer += (num % 2) + '0';
            num /= 2;
        }
        while(answer.size() < n)
            answer += "0";
        reverse(answer.begin(), answer.end());
        cout << answer << endl;
        return answer;
    }

    string findDifferentBinaryString(vector<string>& nums){
        sort(nums.begin(), nums.end());
        int i;
        int n = nums.size();
        string s;
        for(i = 0; i < n; i++){
            s = toBinaryString(i, n);
            if(s != nums[i]) return s;
        }
        return toBinaryString(i, n);
    }
};