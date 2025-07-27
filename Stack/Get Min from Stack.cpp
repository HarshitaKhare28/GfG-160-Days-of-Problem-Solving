#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    stack<int>s;
    stack<int>minstack;
  public:
    // Add an element to the top of Stack
    void push(int x) {
        s.push(x);
        if(minstack.empty() || x<=minstack.top()){
            minstack.push(x);
        }
        // code here
        else{
            minstack.push(minstack.top());
        }
    }

    // Remove the top element from the Stack
        
    int pop() {
        // code here
        if(s.empty())return -1;
        int popele = s.top();
        s.pop();
        minstack.pop();
        return popele;
    }

        
    // Returns top element of the Stack
    int peek() {
        // code here
        if(s.empty())return -1;
        return s.top();
    }
        

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(minstack.empty())return -1;
        return minstack.top();
    }
};

