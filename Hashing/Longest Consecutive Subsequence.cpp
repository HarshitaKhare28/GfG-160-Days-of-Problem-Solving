#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
  
      // Function to return length of longest subsequence of consecutive integers.
      int longestConsecutive(vector<int>& arr) {
          // Your code here
          int n = arr.size();
          if(n==1||n==0)return n;
          sort(arr.begin(),arr.end());
          int cnt = 1;
          int maxo = 0;
          for(int i = 1;i<n;i++){
              if(i != n-1 && arr[i] == arr[i-1])continue;
              if(arr[i]==arr[i-1]+1){
                  cnt++;
              }
              else{
                  cnt = 1;
              }
              maxo = max(maxo,cnt);
          }
          return maxo;
      }
  };