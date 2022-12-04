// LeetCode 1423. Maximum Points You Can Obtain from Cards
// Prefix sum. 
class Solution{
public:
    int maxScore(vector<int>& cardPoints, int k){
        int n = cardPoints.size();
        int frontSetOfCards[k + 1];
        int rearSetOfCards[k + 1];
        frontSetOfCards[0] = rearSetOfCards[0] = 0;
        for(int i = 0; i < k; i++){
            frontSetOfCards[i + 1] = cardPoints[i] + frontSetOfCards[i];
            rearSetOfCards[i + 1] = cardPoints[n - i - 1] + rearSetOfCards[i];
        }
        int maxScore = 0;
        for(int i = 0; i <= k; i++){
            int currentScore = frontSetOfCards[i] + rearSetOfCards[k - i];
            maxScore = max(maxScore, currentScore);
        }
        return maxScore;
    }
};
