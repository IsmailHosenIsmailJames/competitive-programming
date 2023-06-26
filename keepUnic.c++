#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int l = nums.size();
        int k = 1;
        int c = nums[0];
        for(int i: nums){
            if(i != c){
                c = i;
                nums[k] = c;
                k++;
            }
        }
        return k;
        
    }
};

int main(){
    vector<int> v = {1, 2, 3,3, 3, 4};
    Solution obj;
    cout << obj.removeDuplicates(v);
    for(auto i: v){
        cout << i << endl;
    }
}