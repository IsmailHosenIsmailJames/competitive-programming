#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        map<char, int> breaces = {{'(', 1}, {'{', 2}, {'[', 3}, {')', -1}, {'}', -2}, {']', -3}};
        vector<char> stack;
        for (int i = 0; i < l; ++i) {
            if(breaces[s[i]] > 0) {
                stack.push_back(s[i]);
            }else{
                if(stack.size() == 0){
                    return false;
                }
                if((breaces[s[i]] + breaces[stack[stack.size() -1]]) == 0) {
                    stack.pop_back();
                }else{
                    return false;
                }
            }
        }
        if(stack.size() > 0){
            return false;
        }else{
            return true;
        }
    }
};

int main(){
    Solution obj;
    cout << obj.isValid("{}{}");
    
}