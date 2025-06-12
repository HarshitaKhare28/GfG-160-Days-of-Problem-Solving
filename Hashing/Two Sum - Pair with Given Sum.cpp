#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool binsearch(vector<int>&arr,int low,int high,int t){
          while(low <= high){
              int mid = low + (high-low)/2;
              if(arr[mid] == t){
                  return true;
              }else if(arr[mid] > t){
                  high = mid - 1;
              }else{
                  low = mid + 1;
              }
          }
          return false;
      }
      bool twoSum(vector<int>& arr, int target) {
          // code here
          int n = arr.size();
          sort(arr.begin(),arr.end());
          for(int i = 0;i<n;i++){
              int compliment = target - arr[i];
              if(binsearch(arr,i+1,arr.size()-1,compliment)){
                  return true;
              }
          }
          return false;
      }
  };