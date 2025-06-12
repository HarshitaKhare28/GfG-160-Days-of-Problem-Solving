#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int getSecondLargest(vector<int> &arr) {
          // code here
          sort(arr.begin(),arr.end());
          for(int i = arr.size()-1;i>0;i--){
              if(arr[i] != arr[i-1]){
                  return arr[i-1];
              }
          }
          return -1;
      }
  };
  