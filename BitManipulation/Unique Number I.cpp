#include <iostream.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int findUnique(vector<int> &arr) {
          // code here
          int x = 0;
          int n = arr.size();
          for(int i = 0;i<n;i++){
              x ^= arr[i];
          }
          return x;
      }
  };