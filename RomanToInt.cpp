class Solution {
public:
    int romanToInt(string s) {
        vector<char> rNums;
        map<char, int> roman = {{'I', 1},{'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        int total = 0;
        
        string::iterator it;
        
        for(it = s.begin(); it!= s.end(); it++){
            rNums.push_back(*it);
        }
        rNums.push_back(' ');
        
        for (int i = 0; i < rNums.size()-1; i++){
            if (roman[rNums[i]] < roman[rNums[i+1]]){
                total += (roman[rNums[i+1]] - roman[rNums[i]]);
                i++;
            }
            else{ 
                total += roman[rNums[i]];
            }
        }
        
        return total;
    }
};
