#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> singleNum(vector<int>& arr) {
          // Code here.
          unordered_map<int,int>mp;
          for(int x:arr){
              mp[x]++;
          }
          vector<int>a;
          for(const auto& it:mp){
              if(it.second==1){
                  a.push_back(it.first);
              }
          }
          sort(a.begin(),a.end());
          return a;
      }
  };