#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int> ans;
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.size()==0)
            {
                ans.push_back(-1);
            }
            else if(s.size()>0 && s.top()<v[i])
            {
                ans.push_back(s.top());
            }
            else if(s.size()>0 && s.top()>=v[i])
            {
                while(s.size()>0 && s.top()>=v[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    ans.push_back(-1);
                }
                else
                {
                    ans.push_back(s.top());
                }
            }
            s.push(v[i]);
        }
        cout<<endl;
        for(int x:ans) cout<<x<<' ';
    }
}