#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      void nextPermutation(vector<int>& nums) {
          // code here
          int n = nums.size();
          int i = nums.size()-1;
          while(i>0 && nums[i-1] >= nums[i]){
              i--;
          }
          //int sp=pivot;
          if(i==0){
              reverse(nums.begin(),nums.end());return;
          }
          int j = n-1;
          while(j >= i && nums[j] <= nums[i-1]){
              j--;
          }
          swap(nums[i-1],nums[j]);
          reverse(nums.begin()+i,nums.end());
      }
  };
  