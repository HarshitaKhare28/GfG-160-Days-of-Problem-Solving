#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int lowerBound(vector<int>& arr, int target) {
          // code here
          vector<pair<int,int>>a;
          bool flag = false;
          for(int i = 0;i<arr.size();i++){
              if(arr[i]>=target){
                  a.push_back({arr[i],i});
                  flag = true;
              }
          }
          sort(a.begin(),a.end(),[](auto& x,auto& y){
              return x.second < y.second;
          });
          if(flag)return a[0].second;
          else return arr.size();
      }
  };