#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        string toCompare;
        string new_str;
        for(auto i = strs.begin() + 1; i != strs.end(); i++) {
            toCompare = *i;
            new_str = "";
            for (int j = 0; j < prefix.size(); ++j)
            {
                if(prefix[j] == toCompare[j]){
                    new_str += prefix[j];
                }else{
                    if(j == 0){
                        return "";
                    }
                    break;
                }
            }
            prefix = new_str;
            
        }
        return prefix;
    }
};

int main(){
    vector<string> v = {"flower","flow","flight"};
    Solution obj;
    cout << obj.longestCommonPrefix(v);
}