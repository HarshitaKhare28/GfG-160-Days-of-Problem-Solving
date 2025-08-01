#include <iostream.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int missingNum(vector<int>& arr) {
          // code here
          sort(arr.begin(),arr.end());
          int n = arr.size()+1;
          int x = 0;
          int y= 0;
          for(int i = 0;i<n-1;i++){
              x ^= arr[i];
          }
          for(int i = 1;i<=n;i++){
              y ^= i;
          }
          return x^y;
      }
  };