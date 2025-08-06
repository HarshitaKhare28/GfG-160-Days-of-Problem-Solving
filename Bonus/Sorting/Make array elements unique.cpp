#include<bits/stdc++.h>
using namespace std;  

class Solution {
    public:
      int minIncrements(vector<int>& arr) {
          // Code here
          sort(arr.begin(),arr.end());
          int cnt = 0;
          for(int i = 1;i<arr.size();i++){
              if(arr[i] <= arr[i-1]){
                  cnt += arr[i-1]+1 - arr[i];
                  arr[i] = arr[i-1] + 1;
              }
          }
          return cnt;
      }
  };