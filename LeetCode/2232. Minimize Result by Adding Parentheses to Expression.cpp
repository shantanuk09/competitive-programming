// LeetCode 2232. Minimize Result by Adding Parentheses to Expression
class Solution{
public:
    int evaluate(string s){
        int i = 0;
        int result = 0;
        string number1, number2, number3, number4;
        while(s[i] != '(')
            number1 += s[i++];
        i++;
        while(s[i] != '+')
            number2 += s[i++];
        i++;
        while(s[i] != ')')
            number3 += s[i++];
        i++;
        while(i < s.size())
            number4 += s[i++];
        if(number1.size() == 0) number1 = "1";
        if(number4.size() == 0) number4 = "1";
        return stoi(number1) * (stoi(number2) + stoi(number3)) * stoi(number4);
    }

    string minimizeResult(string expression){
        string optimal;
        int result = INT_MAX;
        int plus = find(expression.begin(), expression.end(), '+') - expression.begin();
        for(int i = 0; i < plus; i++){
            for(int j = plus + 1; j < expression.size(); j++){
                string mod;
                for(int k = 0; k < expression.size(); k++){
                    if(k == i) mod += '(';
                    mod += expression[k];
                    if(k == j) mod += ')';
                }
                int current = evaluate(mod);
                if(current < result) result = current, optimal = mod;
            }
        }
        return optimal;
    }
};