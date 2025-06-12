#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int kthElement(vector<int>& a, vector<int>& b, int k) {
          // code here
          vector<int>ans;
          for(int x:a){
              ans.push_back(x);
          }
          for(int x:b){
              ans.push_back(x);
          }
          sort(ans.begin(),ans.end());
          return ans[k-1];
      }
  };