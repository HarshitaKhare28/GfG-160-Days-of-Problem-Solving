#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      vector<vector<string>> anagrams(vector<string>& arr) {
          // code here
          int n = arr.size();
          // vector<int>ans;
          unordered_map<string,int>mp;
          vector<vector<string>>res;
          for(int i = 0;i<n;i++){
              string s = arr[i];
              sort(s.begin(),s.end());
              if(mp.find(s)==mp.end()){
                  mp[s] = res.size();
                  res.push_back({});
              }
              res[mp[s]].push_back(arr[i]);
          }
          return res;
      }
  };