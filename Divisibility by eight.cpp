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
{
string s;
cin>>s;
reverse(s.begin(),s.end());
s.pb('0');
s.pb('0');
reverse(s.begin(),s.end());
ll n=s.size();
ll a[125][3],flag=0,p;
f(i,0,125)
{
    ll num=8*i;
    a[i][2]=num%10;
    num=num/10;
    a[i][1]=num%10;
    num=num/10;
    a[i][0]=num%10;
}
f(i,0,125)
{   ll l=0;
    f(j,0,n)
    {
        if(a[i][l]==s[j]-48) l++;
        if(l==3)
           {flag=1;
            p=i;
            i=125;
            break;
           }

    }
}
if(flag)
{
    cout<<"YES\n";
    if(a[p][0]) cout<<a[p][0];
    if(a[p][1]) cout<<a[p][1];
    cout<<a[p][2];
}
else
    cout<<"NO\n";
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
