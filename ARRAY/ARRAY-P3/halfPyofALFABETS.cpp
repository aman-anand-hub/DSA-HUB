#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    //char al='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<=i) cout<<char(97+j);
            else cout<<' ';
        }
        cout<<endl;
    }
}