#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> nextLargerElement(vector<int>& arr) {
          // code here
          int n = arr.size();
          vector<int>ans(n,-1);
          
          // ans[n-1]=-1;
          int i = 0;
          int j = i+1;
          stack<int>st;
          for(int i=n-1;i>=0;i--){
              
              // int m =-1;
              // for(int x=i;x<n;x++){
              //     st.push(arr[x]);
              // }
              while(st.empty()!=true && st.top()<=arr[i]){
                  // if(st.top()>arr[i]){
                  //     m = st.top();
                  // }
                  st.pop();
              }
              if(st.empty() != true){
                  ans[i]=st.top();
              }
              st.push(arr[i]);
          }
          
          return ans;
      }
  };