#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int countSubarrays(vector<int> &arr, int k) {
          // code here
          unordered_map<int,int>ps;
          int n = arr.size();
          int currsum = 0;
          int res = 0;
          for(int i = 0;i<n;i++){
              currsum += arr[i];
              if(currsum == k){
                  res++;
              }
              if(ps.find(currsum-k) != ps.end()){
                  res += ps[currsum - k];
              }
              ps[currsum]++;
          }
          return res;
      }
  };