#include<bits/stdc++.h>

using namespace std;

string helper(string s, int i, int j){

        //edge case
        if(s[i]!=s[j] || j>=s.length()){
            return "";
        }

        //move both side one by one
        while(i>=0 && j<=s.length() && s[i]==s[j]){
            i--;
            j++;
        }
        //cout<<s.substr(i+1, len-2)<<endl;
        
        return s.substr(i+1, j-i-1);  //(j-i-1) is the length of the palindrome found
        
}
    
string longestPalindrome(string s) {
        
    string ans="";
    int maxLen=0;
        
    for(int i=0;i<s.length();i++){
            
        string temp1=helper(s,i,i); //take single character  
        string temp2=helper(s,i,i+1); //take two characters

        //from temp1 and temp2 whichever is greater check if thats also greater then answer or not, if yes it will be our new answer
            
        if(temp1.length()>temp2.length() && temp1.length()>maxLen){
            ans=temp1;
            maxLen=temp1.length();
        }
        else if(temp2.length()>temp1.length() && temp2.length()>maxLen){
            ans=temp2;
            maxLen=temp2.length();
        }
            
    } 
    return ans;
    
}

int main(){
    cout<<longestPalindrome("aaaabbaacc")<<endl;
    cout<<longestPalindrome("cbbd")<<endl;
    cout<<longestPalindrome("abccbc")<<endl;
    cout<<longestPalindrome("xtys")<<endl;
}