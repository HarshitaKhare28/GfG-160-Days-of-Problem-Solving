#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      void permute(int ind,string &str,set<string> &ans){
          if(ind == str.length()){
              ans.insert(str);
          }
          for(int i = ind;i<str.length();i++){
              swap(str[ind],str[i]);
              permute(ind+1,str,ans);
              swap(str[ind],str[i]);
          }
      }
      vector<string> findPermutation(string &s) {
          // Code here there
          set<string>ans;
          permute(0,s,ans);
          vector<string>nums(ans.begin(),ans.end());
          return nums;
      }
  };
  