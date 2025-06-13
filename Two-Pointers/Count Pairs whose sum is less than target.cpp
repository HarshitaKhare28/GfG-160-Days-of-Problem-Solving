#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int countPairs(vector<int> &arr, int target) {
          // Your code here
          int n = arr.size();
          int cnt = 0;
          int i = 0;
          int j = n-1;
          sort(arr.begin(),arr.end());
          while(i < j){
              int sum = arr[i]+arr[j];
              if(sum < target){
                  cnt += j - i;
                  i++;
              }else{
                  j--;
              }
          }
          return cnt;
      }
  };