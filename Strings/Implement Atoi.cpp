#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int myAtoi(char *s) {
          // Your code here
          string snew="";
          int i = 0;
          while(s[i]==' ')i++;
          bool isneg = false;
          if(s[0]=='-'){
              isneg = true;
              i++;
          }
          long long ans = 0;
          while(s[i] >= '0' && s[i]<='9'){
              snew += s[i];
              ans = ans*10 + (s[i] - '0'); 
              if(!isneg && ans >= INT_MAX)return INT_MAX;
              if(isneg && -ans <= INT_MIN)return INT_MIN;
              i++;
          }
          //int ans = atoi(snew);
          if(isneg)return -ans;
          else return ans;
      }
  };