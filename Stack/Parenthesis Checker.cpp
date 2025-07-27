#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool isBalanced(string& k) {
          // code here
          stack<int>st;
          int n = k.length();
          if(n%2 != 0)return false;
          for(int i = 0;i<n;i++){
              if(k[i] == '(' || k[i]=='{'||k[i]=='['){
                  st.push(k[i]);
              }else if(st.empty() != true&& k[i]==')'&&st.top()=='('){
                  st.pop();
              }else if(st.empty() != true&&k[i]=='}'&&st.top()=='{'){
                  st.pop();
              }else if(st.empty() != true&&k[i]==']'&&st.top()=='['){
                  st.pop();
              }else{
                  st.push(k[i]);
              }
          }
          return st.empty();
      }
  };
