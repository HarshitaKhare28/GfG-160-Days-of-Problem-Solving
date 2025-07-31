#include <iostream.h>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int startStation(vector<int> &gas, vector<int> &cost) {
          // Your code here
          int totalgas=0,currgas=0,startind=0;
          int n = gas.size();
          for(int i = 0;i<n;i++){
              currgas += gas[i]-cost[i];
              totalgas += gas[i]-cost[i];
              if(currgas < 0){
                  currgas = 0;
                  startind = i+1;
              }
          }
          if(totalgas<0)return -1;
          return startind;
      }
  };