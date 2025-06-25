#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      double power(double b, int e) {
          // code here
          if(b==1 || e == 1)return b;
          if(e==0)return 1;
          if(b == 0)return 0;
          if(e < 0)return 1/power(b,-e);
          double half = power(b*b,e/2);
          if(e % 2 ==0)return half;
          else return b*half;
      }
  };