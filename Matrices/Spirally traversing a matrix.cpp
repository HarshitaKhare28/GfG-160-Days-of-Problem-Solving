#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      vector<int> spirallyTraverse(vector<vector<int> > &mat) {
          // code here
          int n = mat.size();//rows
          int m = mat[0].size();//columns
          int left=0;
          int right = m-1;
          int top = 0;
          int down = n-1;
          vector<int>ans;
          while(top <= down && left <= right){
              
              for(int i = left ;i<=right;i++){
                  ans.push_back(mat[top][i]);
              }
              top++;
              for(int i = top ;i<=down;i++){
                  ans.push_back(mat[i][right]);
              }
              right--;
              if(top <= down){
                  for(int i = right;i>=left;i--){
                      ans.push_back(mat[down][i]);
                  }
                  down--;
              }
              if(left <= right){
                  for(int i = down;i>=top;i--){
                      ans.push_back(mat[i][left]);
                  }
                  left++;
              }
          }
          return ans;
      }
  };