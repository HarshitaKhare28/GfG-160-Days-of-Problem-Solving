#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> calculateSpan(vector<int>& arr) {
          // write code here
          int n = arr.size();
          vector<int>ans(n);
          stack<int>st;
          for(int i = 0;i<n;i++){
              //st.push(arr[i]);
              while(!st.empty() && arr[st.top()]<=arr[i]){
                  st.pop();
              }
              if(st.empty()){
                  ans[i] = i+1;
              }else{
                  ans[i] = i- st.top();
              }
              st.push(i);
          }
          return ans;
      }
  };