#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      // double median(vector<int> &arr){
      //     sort(arr.begin(),arr.end());
      //     if(arr.size()%2 != 0){
      //         return arr[arr.size()/2];
      //     }else{
      //         return (arr[arr.size()/2 - 1] + arr[arr.size()/2])/2.0;
      //     }
      // }
      vector<double> getMedian(vector<int> &arr) {
          // code here
          vector<double>ans;
          int n = arr.size();
          priority_queue<int>left;
          priority_queue<int,vector<int>,greater<int>>right;
          for(int i = 0;i<n;i++){
              int num = arr[i];
              if(left.empty() || num <= left.top()){
                  left.push(num);
              }else{
                  right.push(num);
              }
              if(left.size() > right.size()+1){
                  right.push(left.top());
                  left.pop();
              }else if(left.size() < right.size()){
                  left.push(right.top()); 
                  right.pop();
              }
              if(left.size()==right.size()){
                  ans.push_back((left.top() + right.top())/2.0);
              }else{
                  ans.push_back(left.top());
              }
          }
          //sort(ans.begin(),ans.end());
          return ans;
      }
  };
  