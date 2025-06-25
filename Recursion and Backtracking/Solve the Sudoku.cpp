#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find a solved Sudoku.
    bool isvalid(vector<vector<int>> &board,int row,int col, int c){
        for(int i = 0;i<9;i++){
            if(board[i][col] == c)return false;
            if(board[row][i] == c)return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3] == c)return false;
        }
        return true;
    }
    bool solve(vector<vector<int>> &mat){
        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[i].size();j++){
                if(mat[i][j] == 0){
                    for(int c = 1;c<=9;c++){
                        if(isvalid(mat,i,j,c)){
                            mat[i][j] = c;
                            if(solve(mat) == true)
                                return true;
                            else
                                mat[i][j] = 0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        solve(mat);
    }
};