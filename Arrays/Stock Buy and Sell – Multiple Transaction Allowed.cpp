#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int maximumProfit(vector<int> &nums) {
          // code here
          int i = 0;
          int sum = 0,lmin=0,lmax=0;
          while(i < nums.size()-1){
              //local min
              while(i<nums.size()-1 && nums[i]>= nums[i+1]){
                  i++;
              }
              lmin = nums[i];
              //local max
              while(i<nums.size()-1 && nums[i] <= nums[i+1]){
                  i++;
              }
              lmax = nums[i];
              sum += lmax - lmin;
          }
          return sum;
      }
  };