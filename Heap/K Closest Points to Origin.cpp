#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      static int distance(vector<int>& point){
          return point[0]*point[0]+point[1]*point[1];
      }
      static bool cmp(vector<int>&p1,vector<int>&p2){
          return distance(p1) < distance(p2);
      }
      vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
          // Your code here
          sort(points.begin(),points.end(),cmp);
          vector<vector<int>>ans(points.begin(),points.begin()+k);
          return ans;
      }
  };