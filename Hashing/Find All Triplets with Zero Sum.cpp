#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      vector<vector<int>> findTriplets(vector<int> &arr) {
          // Code here
          int n = arr.size();
          vector<vector<int>>ans;
          unordered_map<int,vector<int>>mp;
          for(int j = 0;j<arr.size();j++){
              for(int k = j+1;k<arr.size();k++){
                  int val = -1*(arr[j]+arr[k]);
                  if(mp.find(val) != mp.end()){
                      for(auto i:mp[val]){
                          ans.push_back({i,j,k});
                      }
                  }
              }
              mp[arr[j]].push_back(j);
          }
          return ans;    
      }
  };