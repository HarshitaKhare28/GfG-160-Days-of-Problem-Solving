#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to search a given number in row-column sorted matrix.
      bool searchRowMatrix(vector<vector<int>> &mat, int x) {
          // code here
          int n = mat.size();
          int m = mat[0].size();
          int low = 0;
          int high = m-1;
          for(int i = 0;i<n;i++){
              if(x>=mat[i][0] && x<=mat[i][m-1]){
                  for(int j = 0;j<m;j++){
                      if(mat[i][j]==x)return true;
                  }
              }
          }
          return false;
      }
  };