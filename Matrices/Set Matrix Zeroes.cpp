#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      void setMatrixZeroes(vector<vector<int>> &mat) {
          // code here
          int n = mat.size();
          int m = mat[0].size();
          vector<bool>rows(n,false),cols(m,false);
          for(int i = 0;i<n;i++){
              for(int j = 0;j<m;j++){
                  if(mat[i][j]==0){
                      rows[i]=true;
                      cols[j]=true;
                  }
              }
          }
          for(int i = 0;i<n;i++){
              for(int j = 0;j<m;j++){
                  if(rows[i] || cols[j]){
                      mat[i][j] = 0;
                  }
              }
          }
      }
  };