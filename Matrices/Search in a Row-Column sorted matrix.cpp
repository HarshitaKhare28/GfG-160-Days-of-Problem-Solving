#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool matSearch(vector<vector<int>> &mat, int x) {
          // your code here
          int n = mat.size();
          int m = mat[0].size();
          //int j = m-1;
          int i =0;
          while(i < n){
              if(x>=mat[i][0] && x <=mat[i][m-1]){
                  for(int k = 0;k<=m-1;k++){
                      if(i<n && x==mat[i][k])return true;
                  }    
              }
              i++;
          }
          return false;
      }
  };