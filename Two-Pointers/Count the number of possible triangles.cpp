#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int countTriangles(vector<int>& arr) {
          // code here
          int n = arr.size();
          int cnt = 0;
          int res = 0;
          sort(arr.begin(),arr.end());
          for(int i = 0;i<n;i++){
              for(int j = i+1;j<n;j++){
                  int k = lower_bound(arr.begin()+j+1,arr.end(),arr[i]+arr[j])
                  - arr.begin();
                  int cnt = k - j - 1;
              res += cnt;
              }
          }
          return res;
      }
  };
  