#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      long subarrayXor(vector<int> &arr, int k) {
          // code here
          unordered_map<int,int>mp;
          int prefxor = 0;
          int n = arr.size();
          int res = 0;
          for(int i = 0;i<n;i++){
             prefxor ^= arr[i]; 
             res += mp[prefxor ^ k];
             if(prefxor == k){
                 res++;
             }
             mp[prefxor]++;
          }
          return res;
      }
  };