#include <iostream.h>
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
    public:
      int findDuplicate(vector<int>& arr) {
          // code here
          int x = 0;
          int n = arr.size();
          for(int i = 0;i<n-1;i++){
              x ^= (i+1)^arr[i];
          }
          x= x^arr[n-1];
          return x;
      }
  };