#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to find the minimum number of platforms required at the
      // railway station such that no train waits.
      int findPlatform(vector<int>& arr, vector<int>& dep) {
          // Your code here
          int n = arr.size();
          if(n==1)return 1;
          sort(arr.begin(),arr.end());
          sort(dep.begin(),dep.end());
          int cnt = 0,maxo = 0;
          int j=0;
          for(int i = 0;i<n;i++){
              while(j<n && dep[j]<arr[i]){
                  cnt--;
                  j++;
              }
              
              cnt++;
              
              maxo = max(maxo,cnt);
          }
          return maxo;
      }
  };
  