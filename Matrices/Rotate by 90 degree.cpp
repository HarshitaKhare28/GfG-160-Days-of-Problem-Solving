#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>>transpose(vector<vector<int>> a){
          for(int i = 0;i<a.size();i++){
              for(int j = i+1;j<a[0].size();j++){
                  swap(a[i][j],a[j][i]);
              }  
          }
      return a;
      }
      vector<vector<int>>flip(vector<vector<int>> a){
          for(int i = 0;i<a.size();i++){
              for(int j = 0;j<a[0].size()/2;j++){
                  swap(a[i][j],a[i][a[0].size()-1-j]);
              }
          }
          return a;
      }
      // Function to rotate matrix anticlockwise by 90 degrees.
      void rotateby90(vector<vector<int>>& mat) {
          // code here
          mat = transpose(flip(mat));
      }
  };
  