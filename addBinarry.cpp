#include <algorithm> 
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length() > b.length()) return result(a, b);
        else return result(b, a);
    }
    string result(string &a, string &b){
        int bl = a.length(), sl = b.length(), dif = bl - sl, c1, c2, add, carry = 0;
        string ans = "";
        for(int i = sl-1; i >= 0; i--){
            c1 = a[i+dif] - '0';
            c2 = b[i] - '0';
            add = c1+c2+carry;
            if(add == 2){
                carry = 1;
                add = 0;
            }else if( add == 3){
                carry = 1;
                add = 1;
            }else{
                carry = 0;
            }
            ans.insert(ans.end()--, (char)(add+'0'));
        }
        while (dif--) {
            c1 = a[dif] - '0';
            add = c1 + carry;
            if(add == 2){
                carry = 1;
                add = 0;
            }else if( add == 3){
                carry = 1;
                add = 1;
            }else{
                carry=0;
            }
            ans.insert(ans.end()--, (char)(add+'0'));
        }
        if(carry > 0){
            ans.insert(ans.end()--, (char)(carry+'0'));
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};


int main(int argc, char const *argv[])
{
    Solution obj;
    cout << obj.addBinary("101111", "10");
    // 1010001
    // 110001
    return 0;
}
