#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define fo2(i,start,end) for(i=start;i<=end;i++)
#define rfo(i,n) for(i=n-1;i>=0;i--)
#define ll long long int
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it,a) for(auto it=a.begin(); it!=a.end();it++)
#define nl '\n'
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
void solve(){
    int i,j;
    ll n,k,x;
    cin>>n>>k>>x;
    ll a[n],temp,ans;
    vl v;
    fo(i,n){
        cin>>a[i];
    }
    sort(a,a+n);

    fo2(i,1,n-1){
        temp=a[i]-a[i-1];
        if(temp>x){
            v.pb(temp);
        }
    }
    ans=v.size()+1;
    sort(all(v));
    fo(i,v.size()){
        temp=(v[i]-1)/x;
        if(k>=temp){
            ans--;
            k-=temp;
        }
        else{
            break;
        }
    }

    cout<<ans<<nl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    while(t--){
        solve();
    }
}

