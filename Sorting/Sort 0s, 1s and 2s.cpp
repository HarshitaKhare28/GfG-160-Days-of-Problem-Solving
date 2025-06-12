#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      void sort012(vector<int>& arr) {
          // code here
          int n = arr.size();
          int cnt0=0,cnt1=0,cnt2=0;
          for(int i = 0;i<n;i++){
              if(arr[i]==0)cnt0++;
              else if(arr[i]==1)cnt1++;
              else{
                  cnt2++;
              }
          }
          int i = 0;
          while(cnt0 !=0){
              arr[i]=0;
              i++;
              cnt0--;
          }
          while(cnt1 != 0){
              arr[i] = 1;
              i++;
              cnt1--;
          }
          while(cnt2 != 0){
              arr[i] = 2;
              i++;
              cnt2--;
          }
      }
  };