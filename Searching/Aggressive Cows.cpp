#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      bool check(vector<int>&stalls,int t,int dist){
          int prev = stalls[0];
          int cnt = 1;
          for(int i = 1;i<stalls.size();i++){
              if(stalls[i] - prev>=dist){
                  prev = stalls[i];
                  cnt++;
              }
          }
          return (cnt >= t);
      }
      int aggressiveCows(vector<int> &stalls, int t) {
  
          // Write your code here
          sort(stalls.begin(),stalls.end());
          int n = stalls.size();
          int res = 0;
          int l = 1;
          int h = stalls[n-1] - stalls[0];
          while(l <= h){
              int mid = l + (h-l)/2;
              if(check(stalls,t,mid)){
                  res = mid;
                  l = mid+1;
              }else{
                  h = mid - 1;
              }
          }
          return res;
      }
  };