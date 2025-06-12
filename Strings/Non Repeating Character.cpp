#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      char nonRepeatingChar(string &s) {
          // Your code here
          unordered_map<char,int>mp;
          for(char x: s){
              mp[x]++;
          }
          string snew="";
          for(const auto& it: mp){
              if(it.second == 1){
              //   sp.push_back(it.first()); 
              snew += it.first;
              }
          }
          if(snew.size()==0)return '$';
          for(int i = 0;i<s.length();i++){
              if(snew.find(s[i]) != string::npos)return s[i];
          }
          return '$';
      }
  };