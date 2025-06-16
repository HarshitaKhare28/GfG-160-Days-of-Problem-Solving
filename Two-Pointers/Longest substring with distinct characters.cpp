#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int longestUniqueSubstr(string &s) {
          // code here
          int cnt = 1,maxo = 1;
          int n = s.length();
          if(n==0)return 0;
          for(int i = 0;i<n;i++){
              unordered_set<int>st;
              for(int j = i;j<n;j++){
                  if(st.find(s[j]) != st.end()){
                      break;
                  }
                  st.insert(s[j]);
                  maxo = max(maxo,j-i+1);
              }
          }
          return maxo;
      }
  };
  