#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int maximumProfit(vector<int> &nums) {
          // code here
          int buy = nums[0],sell = 0;
          for(int i = 0;i<nums.size();i++){
              buy = min(buy,nums[i]);
              sell = max(sell,nums[i]-buy);
          }
          return sell;
      }
  };