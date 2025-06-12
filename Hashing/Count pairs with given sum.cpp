#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int countPairs(vector<int> &arr, int target) {
          // Code here
          unordered_map<int,int>mp;
          int cnt = 0;
          
          for(int i = 0;i<arr.size();i++){
              if(mp.find(target - arr[i]) != mp.end()){
                  cnt += mp[target - arr[i]];
              }
              mp[arr[i]]++;
          }
          return cnt;
      }
  };