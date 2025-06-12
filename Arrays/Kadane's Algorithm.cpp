#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int maxSubarraySum(vector<int> &arr) {
          // Your code here
          int n = arr.size();
          if(n==0)return 0;
          int sum =0;
          int maxo = arr[0];
          for(int i = 0;i<n;i++){
              sum += arr[i];
              if(sum > maxo){
                  maxo = sum;
              }
              if(sum <0){
                  sum = 0;
              }
          }
          return maxo;
      }
  };