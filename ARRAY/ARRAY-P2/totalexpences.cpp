#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if (a>1000)
        {
            cout<<0.9*a*b<<endl;
        }
        else{
            cout<<a*b<<endl;
        }
    }
    return 0;
}