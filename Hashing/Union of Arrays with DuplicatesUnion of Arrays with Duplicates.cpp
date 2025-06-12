#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      // Function to return the count of number of elements in union of two arrays.
      int findUnion(vector<int>& a, vector<int>& b) {
          // code here
          int n = a.size();
          int m = b.size();
          unordered_set<int>st;
          for(int i = 0;i<n;i++){
              st.insert(a[i]);
          }
          for(int i = 0;i<m;i++){
              st.insert(b[i]);
          }
          vector<int>ans;
          for(int x:st){
              ans.push_back(x);
          }
          return ans.size();
      }
  };