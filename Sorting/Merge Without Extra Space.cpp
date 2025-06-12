#include<bits/stdc++.h>
using namespace std;    
class Solution {
    public:
      void mergeArrays(vector<int>& a, vector<int>& b) {
          // code here
          int i = a.size()-1;
          int j = 0;
          while(i >= 0 && j <=b.size()-1 && a[i]>b[j]){
              swap(a[i],b[j]);
              i--;
              j++;
          }
          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
      }
  };