//Problem Links:
// https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<int> prev(m+1,0),curr(m+1,0);
        int ans=0;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(S1[i-1]==S2[j-1]){
                    curr[j]=prev[j-1]+1;
                    ans=max(ans,curr[j]);
                }
                else
                    curr[j]=0;
            }
            
            prev=curr;
        }
        
        return ans;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}