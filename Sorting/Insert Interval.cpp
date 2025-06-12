#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                         vector<int> &newInterval) {
          // code here
          intervals.push_back(newInterval);
          int n = intervals.size();
          if(n==0)return {};
          sort(intervals.begin(),intervals.end());
          vector<vector<int>>ans;
          ans.push_back(intervals[0]);
          for(int i = 1;i<n;i++){
              vector<int> &interval = ans.back();
              if(intervals[i][0] <= interval[1]){
                  interval[1] = max(intervals[i][1],interval[1]);
              }else{
                  ans.push_back(intervals[i]);
              }
          }
          return ans;
      }
  };