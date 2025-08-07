#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int findMaximum(vector<int> &arr) {
          // code here
          int maxo =  INT_MIN;
          for(int i=0;i<arr.size();i++){
              maxo = max(maxo,arr[i]);
          }
          return maxo;
      }
  };