#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to count inversions in the array.
      int mergeandcount(vector<int>&arr,int l,int r,int m){
          vector<int>left(arr.begin()+l,arr.begin()+m+1);
          vector<int>right(arr.begin()+m+1,arr.begin()+r+1);
          int i = 0;
          int j=0;
          int k=l;
          int cnt = 0;
          while(i < left.size() && j < right.size()){
              if(left[i]<=right[j]){
                  arr[k++] = left[i++];
              }else{
                  arr[k++] = right[j++];
                  cnt += left.size()-i;
              }
          }
          while(i < left.size())arr[k++] = left[i++];
          while(j < right.size())arr[k++] = right[j++];
          return cnt;
      }
      int mergesortncount(vector<int>&arr,int l,int r){
          int cnt = 0;
          if(l < r){
              int m = l + (r-l)/2;
              cnt += mergesortncount(arr,l,m);
              cnt += mergesortncount(arr,m+1,r);
              cnt += mergeandcount(arr,l,r,m);
          }
          return cnt;  
      } 
      int inversionCount(vector<int> &arr) {
          // Your Code Here
          int n = arr.size();
          int cnt = mergesortncount(arr,0,n-1);
          return cnt;
      }
  };