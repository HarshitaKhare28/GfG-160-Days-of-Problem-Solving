#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int kthMissing(vector<int> &arr, int k) {
          // Your code goes here
          vector<int>missing;
          int cnt = 1;
          int n = arr.size();
          int i = 0;
          while(missing.size()<=k){
              if(arr[i]==cnt && i<n){
                  i++;
              }else{
                 missing.push_back(cnt);
              }
              cnt++;
          }
          return missing[k-1];
      }
  };