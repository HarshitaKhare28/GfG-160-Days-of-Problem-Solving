#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> maxOfMins(vector<int>& arr) {
          // Your code here
          int n = arr.size();
          vector<int>res(n,0);
          vector<int>len(n,0);
          stack<int>s;
          for(int i = 0;i<n;i++){
              while(!s.empty() && arr[s.top()] >=arr[i]){
                  int top = s.top();
                  s.pop();
                  int windowsize = s.empty() ? i: i - s.top()-1;
                  len[top] = windowsize;
              }
              s.push(i);
          }
          while(!s.empty()){
              int top = s.top();
              s.pop();
              int windowsize = s.empty() ? n : n-s.top() - 1;
              len[top] = windowsize;
          }
          for(int i=0;i<n;i++){
              int windowsize = len[i] - 1;
              res[windowsize] = max(res[windowsize],arr[i]);
          }
          for(int i = n-2;i>=0;i--){
              res[i] = max(res[i],res[i+1]);
          }
          return res;
      }
  };