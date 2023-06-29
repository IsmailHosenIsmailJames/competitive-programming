#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l = digits.size();
        int carry = 1;
        for(int i = l-1; i  >= 0; i--){
            digits[i] = digits[i] + carry;
            if(digits[i] > 9){
                digits[i] %= 10;
                carry = 1;
            }else{
                carry = 0;
            }

        }
        if(carry > 0){
            digits.insert(digits.begin(), carry);
        }       
        return digits;
    }
};

int main(){
    Solution obj;
    vector<int> v = {9,9,9, 9};
    obj.plusOne(v);
    for(auto i: v){
        cout << i << endl;
    }

}