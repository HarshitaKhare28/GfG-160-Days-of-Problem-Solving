#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int longestSubarray(vector<int>& arr, int k) {
          // code here
          int n = arr.size();
          unordered_map<int,int>mp;
          int pf = 0;
          int maxo = 0;
          for(int i = 0;i<n;i++){
              pf += arr[i];
              if(pf == k)maxo = i+1;
              else if(mp.find(pf - k) != mp.end()){
                  maxo = max(maxo,i - mp[pf - k]);
              }
              if(mp.find(pf)==mp.end()){
                  mp[pf] = i;
              }
          } 
          return maxo;
      }
  };