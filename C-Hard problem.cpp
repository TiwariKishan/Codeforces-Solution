/*
  Author - KISHAN TIWARI
  Dream bigger. Do bigger.
  Wake up with determination. Go to bed with satisfaction.
*/
//Sometimes later becomes never. Do it now.
#include<bits/stdc++.h>
using namespace std;
#define ll           long long
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define mod          1000000007
#define fi           first
#define se           second
#define pa           pair <ll,ll>
#define mp           make_pair
#define pb           push_back
#define ve           vector<ll>
#define vep          vector< pa >
#define all(a)       a.begin(), a.end()
#define sz(x)        (ll)x.size()
#define c(t)         cout<<t<<"\n"
using namespace std;
void solve()
{  ll n;
cin>>n;
ll c[n];
f(i,0,n)  cin>>c[i];
string s[n+1],r[n+1];
f(i,1,n+1)
{cin>>s[i];
 r[i]=s[i];
 reverse(r[i].begin(),r[i].end());
}
s[0]="0";
r[0]="0";
ll dp[n+1][2];
f(i,1,n+1)
{
    dp[i][0]=1LL<<60;
    dp[i][1]=1LL<<60;
}
dp[0][0]=0;
dp[0][1]=0;
f(i,1,n+1)
{
    if(s[i-1]<=s[i]) dp[i][0]=min(dp[i][0],dp[i-1][0]);
    if(r[i-1]<=s[i]) dp[i][0]=min(dp[i][0],dp[i-1][1]);
    if(s[i-1]<=r[i]) dp[i][1]=min(dp[i][1],dp[i-1][0]+c[i-1]);
    if(r[i-1]<=r[i]) dp[i][1]=min(dp[i][1],dp[i-1][1]+c[i-1]);
}
ll ans=min(dp[n][0],dp[n][1]);
if(ans>=1LL<<60)
    ans=-1;
c(ans);
}
int main()
{
    ios::sync_with_stdio(true);
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--)
    {

        solve();
    }
return 0;
}
