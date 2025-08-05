#include<bits/stdc++.h>
using namespace std;    

class Solution {
    public:
     static bool compare(string& s1, string& s2){
         return (s1+s2) > (s2+s1);
     }
      string findLargest(vector<int> &arr) {
          // code here
          vector<string>numbers;
          for(int x:arr){
              numbers.push_back(to_string(x));
          }
          sort(numbers.begin(),numbers.end(),compare);
          if(numbers[0]=="0"){
              return "0";
          }
          string res = "";
          for(string& num:numbers){
              res.append(num);
          }
          return res;
      }
  };