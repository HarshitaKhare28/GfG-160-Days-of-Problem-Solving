#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
          // Code here
          int n = arr.size();
          if(n==0)return{};
          sort(arr.begin(),arr.end());
          vector<vector<int>>ans;
          ans.push_back(arr[0]);
          for(int i = 1;i<n;i++){
              vector<int>&interval = ans.back();
              if(arr[i][0] <= interval[1]){
                  interval[1] = max(interval[1],arr[i][1]);
              }
              else{
                  ans.push_back(arr[i]);
              }
          }
          return ans;
      }
  };