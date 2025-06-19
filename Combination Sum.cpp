#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find all combinations of elements
    // in array arr that sum to target.
    void find_combination(int ind,int target,vector<vector<int>>&res,vector<int>&ds,vector<int>arr){
        if(ind == arr.size()){
            if(target == 0){
                res.push_back(ds);
            }
            return;
        }
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
           find_combination(ind,target-arr[ind],res,ds,arr); 
           ds.pop_back();
        }
        find_combination(ind+1,target,res,ds,arr);
    }
    vector<vector<int>> combinationSum(vector<int> &arr, int target) {
        // Your code here
        vector<vector<int>>res;
        vector<int>ds;
        find_combination(0,target,res,ds,arr);
        return res;
    }
};
