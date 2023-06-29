#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1 = haystack.length();
        int l2 = needle.length();
        bool b = false;
        for(int i = 0; i < l1; i++){
            if(haystack[i] == needle[0]){
                b = true;
                for(int j = 1; j< l2; j++){
                    if(haystack[i+j] != needle[j]){
                        b = false;
                        break;
                    }
                }
                if(b == true){
                    return i;
                }
            }
        }
        return -1;
    }
};

int main(int argc, char const *argv[])
{
    Solution obj;
    cout << obj.strStr("heroAloam", "Aloam");
    return 0;
}
