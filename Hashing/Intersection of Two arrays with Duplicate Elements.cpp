#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
          // code here
          unordered_map<int,int>mp;
          set<int>s;
          vector<int>ans;
          int n = a.size();
          int m = b.size();
          for(int i = 0;i<n;i++){
              mp[a[i]]++;
          }
          for(int i = 0;i<m;i++){
              if(mp.find(b[i]) != mp.end()){
                  s.insert(b[i]);
              }
          }
          for(int x:s){
              ans.push_back(x);
          }
          sort(ans.begin(),ans.end());
          return ans;
      }
  };