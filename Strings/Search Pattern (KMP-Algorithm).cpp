#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      vector<int> search(string& pat, string& txt) {
          vector<int>arr;
          size_t p = txt.find(pat);
          
          while(p != string::npos){
              arr.push_back(p);
              p = txt.find(pat,p+1);
          }
          
          return arr;
      }
  };