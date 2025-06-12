#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int countTriplets(vector<int> &arr, int target) {
          // Code Here
          int n = arr.size();
          int cnt = 0;
          unordered_map<int,int>mp;
          for(int j = 0;j<n;j++){
              for(int k = j+1;k<n;k++){
                  int val = arr[j]+arr[k];
                  if(mp.find(target - val) != mp.end()){
                      cnt += mp[target - val];
                  }
              }
              mp[arr[j]]++;
          }
          return cnt;
      }
  };