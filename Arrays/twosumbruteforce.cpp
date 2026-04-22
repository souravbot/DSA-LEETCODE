/*
Problem: Two Sum
LeetCode: https://leetcode.com/problems/two-sum/

Approach 1: Brute Force
Time Complexity: O(n²)
Space Complexity: O(1)
*/




class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        for (i = 0; i < nums.size(); i++) {
            for (j = i + 1; j < nums.size(); j++)

                if (nums[i] + nums[j] == target)
                    return vector<int>{i, j};
        }
        return {};
    }
};

/* vs-code version

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}

int main(){
    vector<int> nums={2,7,11,15};
    int target=9;

    vector<int> ans=twoSum(nums,target);

    for(int i:ans){
        cout<<i<<" ";
    }
}
*/
