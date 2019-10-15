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
#define m          1000000007
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
{  ll n,k;
cin>>n>>k;
ll dp[100001];
f(i,0,100001)
dp[i]=1;
f(i,k,100001)
dp[i]=(dp[i-1]%m+dp[i-k]%m)%m;   //first one for R then second one for W that is it have k W's.
ll pr[100001];
pr[0]=dp[0];
f(i,0,100001)
pr[i]=(pr[i-1]%m+dp[i]%m)%m;
f(i,0,n)
{
    ll a,b;
    cin>>a>>b;
    c((pr[b]%m-pr[a-1]%m+m)%m);
}
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
