#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define fo(i,e) for(ll i = 0; i < e; i++)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 vector<int> adj[501]; 
 vector <int> adj2[501]; 
 int a[501];
 int vis[501];
 int vis2[501];
 ll dfs(ll i){
    if(vis[i]) return 0; 
    vis[i]=1; 
    ll s=0 ;
    for(int n: adj[i]){
        if(!vis[n]) 
        s+=a[n]+dfs(n);
    }
    return s; 

 }
 ll dfs2(ll i){
    if(vis2[i]) return 0; 
    vis2[i]=1; 
    ll s=0;
    for(int n: adj2[i]){
        if(!vis2[n]) 
        s+=a[n]+dfs2(n);
    }
    return s;

 }

int main()
{
 fast_cin();
 
 int n,m,u,v,q,k=0;
 while(true){
    cin >> n>>m;
    if(n==0 && n==m) break;
    
    k++;
ll sum=0; 
 fo(i,n) {cin>>a[i]; 
 sum+=a[i];}
 fo(i,m){
    cin>>u>>v;
    u--; v--; 
    adj[u].push_back(v); 
    adj2[v].push_back(u); 

 }
 cin>>q; 
 cout<<"Case #"<<k<<":"<<endl; 
 while(q--){
    ll x,mn,mx; 
    cin>>x; 
    x--;
 mn=dfs(x);
 mx=sum-dfs2(x)-a[x]; 
 cout<<mx-mn<<ln; 
 //dbg(mn); dbg(mx); 
 memset(vis,0,sizeof(vis));
 memset(vis2,0,sizeof(vis2));

 }
 cout<<ln; 
 fo(i,n){
    adj[i].clear();
    adj2[i].clear();
 }
}
 return 0;
}