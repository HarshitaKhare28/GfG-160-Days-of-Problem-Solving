#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      void pushZerosToEnd(vector<int>& arr) {
          // code here
          int i = 0,j = 0;
          while(i <arr.size() && j<arr.size()){
              if(arr[i]==0){
                  j = max(i+1,j);
                  while(j < arr.size() && arr[j] == 0){
                      j++;
                      if(j==arr.size())return;
                  }
                  swap(arr[i],arr[j]);
                  i++;
                  j++;
              }
              else{
                  i++;
              }
          }
      }
  };