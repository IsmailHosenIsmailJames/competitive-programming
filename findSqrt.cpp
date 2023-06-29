#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x <= 0) return 0;
        int low = 1, hi = x, mid;
        while(low <= hi){
            mid = low + (hi - low)/2;
            if(mid == x/mid) return mid;
            else if(mid > x/mid){
                hi = mid -1;
            }else{
                low = mid + 1;
            }
        }
        return hi;
    }
};

int main(int argc, char const *argv[])
{
    Solution obj;
    cout << obj.mySqrt(37);
    
    return 0;
}
