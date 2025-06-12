#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to find the smallest positive number missing from the array.
      int missingNumber(vector<int> &arr) {
          // Your code here
          sort(arr.begin(),arr.end());
          int curr = 1;
          for(int i = 0;i<arr.size();i++){
              if(arr[i]<0)continue;
              if(arr[i] == curr)curr++;
              else if(arr[i]>curr){
                  return curr;
              }
          } 
          return curr;
      }
  };