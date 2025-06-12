#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to find hIndex
      int hIndex(vector<int>& citations) {
          // code here
          int n = citations.size();
          sort(citations.begin(),citations.end());
          int hindex=0;
          vector<int>freq(n+1);
          for(int i = 0;i<n;i++){
              if(citations[i]>=n){
                  freq[n]++;
              }else{
                  freq[citations[i]]++;
              }
          }
          int idx = n;
          int s = freq[n];
          while(s < idx){
              idx--;
              s += freq[idx];
          }
          return idx;
      }
  };