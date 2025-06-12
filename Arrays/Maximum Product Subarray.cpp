#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to find maximum product subarray
      int maxProduct(vector<int> &arr) {
          // Your Code Here
          int n = arr.size();
          int ltr=1;
          int rtl = 1;
          int maxo = INT_MIN;
          for(int i = 0;i<n;i++){
              if(ltr==0)ltr=1;
              if(rtl==0)rtl=1;
              ltr *= arr[i];
              int j = n-1-i;
              rtl *= arr[j];
              maxo = max({ltr,rtl,maxo});
          }
          return maxo;
      }
  };
  