#include <bits/stdc++.h>
using namespace std;

/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
    public:
      Node* mergeKLists(vector<Node*>& arr) {
          // Your code here
          
          vector<int>ans;
          for(int i = 0;i<arr.size();i++){
              Node* head = arr[i];
              while(head != nullptr){
                  ans.push_back(head->data);
                  head = head->next;
              }
          }
          sort(ans.begin(),ans.end());
          Node* dummy = new Node(0);
          Node*tail = dummy;
          for(int val:ans){
              tail->next = new Node(val);
              tail = tail->next;
          }
          return dummy->next;
      }
  };