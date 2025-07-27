#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int evaluate(vector<string>& arr) {
          // code here
          int n = arr.size();
          stack<int>st;
          int ans = 0;
          for(int i = 0;i<n;i++){
              string token = arr[i];
              if(token == "+"||token=="-"||token=="*"||token=="/"){
                  int a = st.top();
                  st.pop();
                  int b = st.top();
                  st.pop();
                  int res = 0;
                  if(token=="+")res = b+a;
                  else if(token=="*")res=b*a;
                  else if(token=="-")res = b-a;
                  else if(token=="/")res=b/a;
                  st.push(res);
              }else{
                  st.push(stoi(token));
              }
          }
          //if(st.top()>=0)return st.top();
          return st.top();
      }
  };