#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find all combinations of elements
    // in array arr that sum to target.
    void find_comb(int ind,int target,set<vector<int>>&res,vector<int>&ds,vector<int>&arr){
        if(ind == arr.size()){
            if(target == 0){
                vector<int>temp = ds;
                sort(temp.begin(),temp.end());
                res.insert(temp);
            }
            return;
        }
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            find_comb(ind+1,target-arr[ind],res,ds,arr);
            ds.pop_back();
        }
        find_comb(ind+1,target,res,ds,arr);
    }
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
        // Your code here
        set<vector<int>>res;
        vector<int>ds;
        find_comb(0,target,res,ds,arr);
        vector<vector<int>> ans(res.begin(),res.end());
        return ans;
    }
};
