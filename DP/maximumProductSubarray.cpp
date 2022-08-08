// problem link: https://leetcode.com/problems/maximum-product-subarray/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxtill=1,mintill=1;
        int maxCurr=1,minCurr=1;
        int ans=INT_MIN;
        
        for(auto x:nums){
            maxCurr=max(max(maxtill*x,mintill*x),x);
            minCurr=min(min(maxtill*x,mintill*x),x);
            maxtill=maxCurr;
            mintill=minCurr;
            
            ans=max(maxCurr,ans);
        }
        
        return ans;
        
    }
};

int main(){
    vector<int> nums{2,3,-2,4};

    Solution obj;

    cout<<obj.maxProduct(nums);
    return 0;
}