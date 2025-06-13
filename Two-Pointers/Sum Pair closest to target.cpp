#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      vector<int> sumClosest(vector<int>& arr, int target) {
          // code here
          int n = arr.size();
          if(n<2)return{};
          sort(arr.begin(),arr.end());
          int mindiff = INT_MAX;
          vector<int>res;
          int left = 0;
          int right = n-1;
          while(left < right){
              int cursum = arr[left]+arr[right];
              if(abs(target-cursum) < mindiff){
                  mindiff = abs(target-cursum);
                  res = {arr[left],arr[right]};
              }
              if(cursum < target){
                  left++;
              }
          else if(cursum > target){
                  right--;
              }else{
                  return res;
              }
          }
          return res;
      }
  };