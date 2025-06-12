#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int minRemoval(vector<vector<int>> &ans) {
          // code here
          int n = ans.size();
          if(n==0)return{};
          sort(ans.begin(),ans.end(),[](auto a,auto b){
              return a[1] < b[1];
          });
          int cnt = 0;
          int lastend = ans[0][1];
          for(int i = 1;i<n;i++){
              if(lastend > ans[i][0]){
                  cnt += 1;
              }else{
                  lastend = ans[i][1];
              }
          }
          return cnt;
      }
  };
  