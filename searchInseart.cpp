#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int hi = nums.size();
        int mid;
        if(target > nums[hi-1]) return hi;
        
        while(low <= hi){
            mid = (hi + low) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                hi = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};


int main(int argc, char const *argv[])
{
    Solution obj;
    vector<int> v = {1,3,5,6};
    cout << obj.searchInsert(v, 7);
    return 0;
}
