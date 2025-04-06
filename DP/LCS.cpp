#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));

    //step 1- normal bottom up soln
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(s1[i]==s2[j]){
                dp[i][j]=1+dp[i+1][j+1];
            }
            else{
                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }

     // Step 2: Reconstruct the LCS string
     string lcs = "";
     int i = 0, j = 0;
     while(i < n && j < m){
         if(s1[i] == s2[j]){
             lcs += s1[i];
             i++; j++;
         } else if(dp[i + 1][j] >= dp[i][j + 1]){
             i++;
         } else {
             j++;
         }
     }
 
     cout << lcs << endl;
}
// at coder f dp contest