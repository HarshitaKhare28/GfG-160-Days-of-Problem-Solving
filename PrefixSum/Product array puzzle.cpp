#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> productExceptSelf(vector<int>& arr) {
          // code here
          int n = arr.size();
          vector<int>pp(n);
          vector<int>sp(n);
          vector<int>res(n);
          pp[0] = 1;
          for(int i = 1;i<n;i++){
              pp[i] = pp[i-1]*arr[i-1];
          }
          sp[n-1] = 1;
          for(int j = n-2;j>=0;j--){
              sp[j] = sp[j+1]*arr[j+1];
          }
          for(int i = 0;i<n;i++){
              res[i] = pp[i]*sp[i];
          }
          return res;
      }
  };
  