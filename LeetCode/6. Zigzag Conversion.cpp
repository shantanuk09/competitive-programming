// LeetCode 6. Zigzag Conversion
// Implementation
class Solution{
public:
    string convert(string s, int numRows){
        if(numRows == 1) return s;
        int n = s.size();
        int sections = ceil(n / (2 * numRows - 2.0));
        int cols = sections * (numRows - 1);
        vector<vector<char>> matrix(numRows, vector<char>(cols, ' '));
        int currentRowIndex = 0, currentColIndex = 0;
        int currentStringIndex = 0;
        while(currentStringIndex < n){
            // Move down.
            while(currentRowIndex < numRows && currentStringIndex < n){
                matrix[currentRowIndex][currentColIndex] = s[currentStringIndex];
                currentRowIndex++, currentStringIndex++;
            }
            // Recenter pointer before moving diagonally.
            currentRowIndex -= 2, currentColIndex++;
            // Move right and up.
            while(currentRowIndex > 0 && currentColIndex < cols && currentStringIndex < n){
                matrix[currentRowIndex][currentColIndex] = s[currentStringIndex];
                currentRowIndex--, currentColIndex++, currentStringIndex++;
            }
        }
        string answer;
        for(auto &row : matrix)
            for(auto &character : row)
                if(character != ' ') answer += character;

        return answer;
    }
};
