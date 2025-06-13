
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int countPairs(vector<int> &arr, int target) {
          // Complete the function
          int n = arr.size();
          int left = 0;
          int right = n-1;
          int res = 0;
          sort(arr.begin(),arr.end());
          while(left < right){
              int sum = arr[left]+arr[right];
              if(sum < target){
                  left++;
              }else if(sum > target){
                  right--;
              }else{
                 int cnt1 = 0,cnt2=0;
                 int ele1 = arr[left],ele2 = arr[right];
                 while(left <= right && ele1 == arr[left]){
                     left++;
                     cnt1++;
                 }
                 while(left <= right && ele2 == arr[right]){
                     right--;
                     cnt2++;
                 }
                 if(ele1 == ele2){
                     res += (cnt1 *(cnt1-1))/2;
                 }else
                  res += cnt1 * cnt2;
              }
          }
          return res;
      }
  };