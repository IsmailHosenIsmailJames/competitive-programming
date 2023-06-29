# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = nums.size();
        int k = 0;
        int x = l-1;
        for(int i = 0; i < l; i++){
            if(nums[i] == val){
                while(x >= 0){
                    if(nums[x] != val){
                        nums[i] = nums[x];
                        x--;
                        break;
                    }
                    x--;
                }
            }else{
                k++;
            }
        }
        return k;
        
    }
};

int main(int argc, char const *argv[]) {
    vector<int> v = {1};
    // [0,1,4,0,3]
    Solution obj;
    cout << obj.removeElement(v, 1);
    for(auto i: v) {
        cout << i << endl;
    }
    return 0;
}
