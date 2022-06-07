// Problem Links:
// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#
// https://www.codingninjas.com/codestudio/problems/799400?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	int count=1;
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int j=0;
    	
    	for(int i=1;i<n;i++){
    	    if(dep[j]<arr[i]){
    	        j++;
    	    }
    	    else{
    	        count++;
    	    }
    	}
    	
    	return count;
    }
};


// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}