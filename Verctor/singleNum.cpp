//! single number
#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    class Solution {
        public:
        int singleNumber(vector<int>& nums) {
            int ans = 0;
            for(int val : nums){
                ans ^= val;
            }
            return ans;
        }
    };
    return 0;
}
    