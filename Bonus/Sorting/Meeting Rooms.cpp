#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool canAttend(vector<vector<int>> &arr) {
          // Code Here
          vector<pair<int,int>>a;
          for(int i = 0;i<arr.size();i++){
              a.push_back({arr[i][0],arr[i][1]});
          }
          sort(a.begin(),a.end(),[](auto& x,auto& y){
              return x.second < y.second;
          });
          for(int i=0;i<a.size()-1;i++){
              if(a[i].second > a[i+1].first){
                  return false;
              }
          }
          return true;
      }
  };