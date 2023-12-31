#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int editDistance(string s, string t, int m, int n)
{
    int dp[m+1][n+1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(i==0)
            {
                dp[i][j]=j;
            }
            else if(j==0)
            {
                dp[i][j]=i;
            }
            else if(s[i-1]==t[j-1])
            {
                dp[i][j]= dp[i-1][j-1];
            }
            else
            {
                dp[i][j]= min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1])) +1;
            }
        }
    }
    return dp[m][n];
}

int main()
{
    string s, t;
    cout<<"enter the strings: "<<endl;
    cin>>s>>t;
    int m = s.length();
    int n = t.length();
    cout<<editDistance(s, t, m, n)<<endl;

    return 0;
}