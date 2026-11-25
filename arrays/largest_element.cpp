// find largest element in an array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
   
 
  sort(nums.begin(), nums.end());

          return nums[nums.size() - 1];

    }
};

    int main(){
        Solution obj;
        vector<int> nums = { 1,4,5,3,2};

        cout << obj.largestElement(nums);

        return 0;
    
    
};