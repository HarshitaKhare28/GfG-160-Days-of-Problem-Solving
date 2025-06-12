#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to find the majority elements in the array
      vector<int> findMajority(vector<int>& arr) {
          // Your code goes here.
          unordered_map<int,int>mp;
          for(int x:arr){
              mp[x]++;
          }
          vector<int>ans;
          for(const auto& it: mp){
              if(it.second > arr.size()/3){
                  ans.push_back(it.first);
              }
          }
          sort(ans.begin(),ans.end());
          return ans;
      }
  };
  