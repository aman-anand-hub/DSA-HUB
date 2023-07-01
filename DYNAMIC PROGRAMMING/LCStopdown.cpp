#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int LCS(string x, string y, int n, int m)
{
    for(int i=0;i<=m;i++) dp[0][i]=0;
    for(int i=1;i<=n;i++) dp[i][0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else if(x[i-1]!=y[j-1])
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main()
{
    string x,y; cin>>x>>y;
    cout<<LCS(x,y,x.length(),y.length())<<endl;
}