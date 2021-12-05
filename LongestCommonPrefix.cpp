class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
                
        string prefix = "";
        int minString = 200;
        if(strs.size() > 1){
            for (int i = 0; i < strs.size(); i++)
                if (strs[i].length() < minString){
                    minString = strs[i].length();
                }
            cout << "minstring: " << minString;   
            if (minString < 1){
               return prefix;
            }
            else

                for (int i = 0; i < minString; i++){
                    for(int j = 0; j < strs.size() - 1; j++){
                        if (strs[j][i] != strs[j+1][i]){
                            return prefix;
                        }
                        else if (j == strs.size()-2){
                            prefix.push_back(strs[j][i]);
                        }
                    }
                }
        }
        else if (strs.size() == 1){
            for (int i = 0; i < strs[0].length(); i++)
                prefix.push_back(strs[0][i]);
        }
    return prefix;

    }
};
