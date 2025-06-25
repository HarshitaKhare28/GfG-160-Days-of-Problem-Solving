#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      void solve(int col,vector<int>&board,vector<vector<int>> &ans,vector<int> &leftrow,
      vector<int>&upp_diag,vector<int> &low_diag,int n){
          if(col==n){
              ans.push_back(board);
              return;
          }
          for(int row = 0;row<n;row++){
              if((leftrow[row]==0 && low_diag[row+col]==0) && (upp_diag[(n-1) + (col-row)]==0)){
                  board[col] = row+1;
                  leftrow[row]=1;
                  low_diag[row+col]=1;
                  upp_diag[(n-1) + (col-row)]=1;
                  solve(col+1,board,ans,leftrow,upp_diag,low_diag,n);
                  board[col] = 0;
                  leftrow[row]=0;
                  low_diag[row+col]=0;
                  upp_diag[(n-1) + (col-row)]=0;
              }
          }
      }
      vector<vector<int>> nQueen(int n) {
          // code here
          vector<int>board(n,0);
          vector<vector<int>>ans;
          vector<int>leftrow(n,0);
          vector<int>upp_diag(2*n-1,0),low_diag(2*n-1,0);
          solve(0,board,ans,leftrow,upp_diag,low_diag,n);
          return ans;
      }
  };