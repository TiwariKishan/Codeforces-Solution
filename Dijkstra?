#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
#define inf 1000000000
#define fi first
#define se second
#define pa pair
#define mp make_pair
#define pb push_back
#define ve vector<ll>
#define vep vector< pa<ll ,ll> >
#define c(t) cout<<t<<"\n"
typedef pair<ll, ll> pi;
using namespace std;
const ll INF = 1000000000000;
vector<pair<ll, ll> > adj[100001];
vector<ll> d,p;
void dijkstra(ll s, vector<ll> &  d, vector<ll> & p,ll e)     //Min priority queue is used in this problem by which time complexity gets reduces
 {  priority_queue<pi, vector<pi>, greater<pi> > pq;
    ll n=100001;
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);
    pq.push((mp(0,s)));
    d[s] = 0;
    while(!pq.empty()) {
        ll v=0;
        v=pq.top().se;
        pq.pop();
        /*for (ll j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }*/
        if(v==e)
            break;
        if (d[v] == INF)
            break;
        if(u[v])
            continue;

        u[v] = true;
        for (ll edge=0; edge<adj[v].size();edge++) {
            ll to = adj[v][edge].first;
            ll len = adj[v][edge].second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                pq.push((mp(d[to],to)));
                p[to] = v;
            }
        }
    }
}
vector<ll> restore_path(ll s, ll t, vector<ll> const& p) {
    vector<ll> path;

    for (ll v = t; v != s; v = p[v])
        {
            path.push_back(v);
           if(v==-1)
            break;
        }
    path.push_back(s);

    reverse(path.begin(), path.end());
    return path;
}
void solve()
{  ll n,m;
   cin>>n>>m;
   f(i,0,m)
   {
       ll a,b,c;
       cin>>a>>b>>c;
       adj[a].pb(mp(b,c));
       adj[b].pb(mp(a,c));
   }
   dijkstra(1,d,p,n);
   ve pat=restore_path(1,n, p);
   if(pat[pat.size()-2]==-1)
    c(-1);
   else
  {
   f(i,0,pat.size())
   cout<<pat[i]<<" ";
   cout<<"\n";}
}
int main()
{
    ios::sync_with_stdio(true);
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
