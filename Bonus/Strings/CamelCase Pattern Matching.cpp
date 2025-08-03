class Solution {
    public:
      vector<string> camelCase(vector<string> &arr, string &pat) {
          // code here
          int n = arr.size();
          vector<string>ans;
          for(int i = 0;i<arr.size();i++){
              int j = 0;
              for(char c:arr[i]){
                  if(j<pat.size() && c==pat[j]){
                      j++;
                  }
                  else if(isupper(c) && (j >= pat.size() || c != pat[j])){
                      break;
                  }
              }
              if(j==pat.size()){
                  ans.push_back(arr[i]);
              }
          }
          return ans;
      }
  };