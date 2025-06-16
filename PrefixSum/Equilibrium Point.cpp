#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to find equilibrium point in the array.
      int findEquilibrium(vector<int> &arr) {
          // code here
          int n = arr.size();
          vector<int>pf(n);
          pf[0] = arr[0];
          for(int i = 1;i<n;i++){
              pf[i] = pf[i-1] + arr[i];
          }
          
          for(int i = 1;i<n;i++){
              int lsum =(i==0) ? 0 :  pf[i-1];
              int rsum = pf[n-1]-pf[i];
              if(lsum == rsum)return i;
          }
          return -1;
      }
  };