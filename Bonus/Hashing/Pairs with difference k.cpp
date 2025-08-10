#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
    public:
      /* Returns count of pairs with difference k  */
      int countPairs(vector<int>& arr, int k) {
          // code here
          int n = arr.size();
          unordered_map<int,int>freq;
          int cnt = 0;
          for(int i = 0;i<n;i++){
              if(freq.find(arr[i]+k) != freq.end()){
                  cnt += freq[arr[i]+k];
              }
              if(freq.find(arr[i]-k) != freq.end()){
                  cnt += freq[arr[i]-k];
              }
              freq[arr[i]]++;
          }
          return cnt;
      }
  };