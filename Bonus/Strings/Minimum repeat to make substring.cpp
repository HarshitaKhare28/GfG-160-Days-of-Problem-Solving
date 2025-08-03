class Solution {
    public:
      int minRepeats(string& s1, string& s2) {
          // code here
          int cnt = 1;
          if(s1==s2)return 1;
          set<char>s;
          for(char c:s2){
              s.insert(c);
          }
          for(char c:s){
              if(s1.find(c) == string::npos){
                  return -1;
              }
          }
          string temp = s1;
          while(temp.length() < s2.length()){
              temp += s1;
              cnt++;
              if(temp.length() >= s2.length())break;
          }
          if(temp.find(s2) != string::npos)return cnt;
          temp += s1;
          cnt++;
          if(temp.find(s2) != string::npos)return cnt;
          return -1;
      }
  };