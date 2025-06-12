#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int findMin(vector<int>& arr) {
          // complete the function here
          int mino = arr[0];
          for(int x:arr){
              mino = min(x,mino);
          }
          return mino;
      }
  };