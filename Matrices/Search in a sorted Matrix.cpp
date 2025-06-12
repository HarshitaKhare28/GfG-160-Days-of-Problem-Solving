#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to search a given number in row-column sorted matrix.
      bool searchMatrix(vector<vector<int>> &mat, int x) {
          // code here
          int n = mat.size();
          int m = mat[0].size();
          int j = m-1;
          int i = 0;
          while(i <n && x > mat[i][j]){
              i++;
          }
          if(i==n)return false;
          for(int k = 0;k<=j;k++){
              if(i < n && x==mat[i][k])return true;
          }
          return false;
      }
  };