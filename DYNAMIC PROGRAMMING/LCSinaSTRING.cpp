#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int LCS(string x, int n)
{
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==x[j-1] && i!=j)
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][n];
} 

int main()
{
    string s; cin>>s;
    cout<<LCS(s,s.length())<<endl;
}