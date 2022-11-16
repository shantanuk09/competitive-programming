// LeetCode 12. Integer to Roman
// Simulate. 
class Solution{
public:
    string intToRoman(int num){
        int large;
        string roman, symbol;
        map<int, string> numeral = {{1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}};
        while(num){
            for(auto& [key, value] : numeral)
                if(key <= num) large = key, symbol = value;
            num -= large;
            roman += symbol;
        }
        return roman;
    }
};