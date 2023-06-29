#include <string.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length();
        int ans =0 ;
        while (l--) {
            if(s[l] != ' '){
                ans++;
            }else{
                if(ans > 0) break;
            }
        }
        return ans;
    }
};

int main(){
    Solution obj;
    cout << obj.lengthOfLastWord("Hello World");
}