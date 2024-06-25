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
 vector<ll> adj[500004]; 
 int vis[500004];
ll dfs(ll i){
    if(vis[i]) return -1; 
    vis[i]++; 
    ll s=0; 
    for(ll j : adj[i]){
        s+=dfs(j)+1;


    }
    return s; 
}
int main()
{
 fast_cin();
 ll n,m,x,y,k;
 
 cin >> n>>m; ll a[n];
 fo(i,m){
    cin>>k; 
    if(k) {cin>>y; --y;}
    for(ll j=1; j<k;j++){
        cin>>x; 
        --x; 
        adj[y].push_back(x);
        adj[x].push_back(y);
        x=y; 

    }
 }
 queue<int> q;
 fo(i,n){
//     memset(vis,0,sizeof vis);
//    cout<< dfs(i)+1<<" "; 
if(!vis[i]){
     vector<ll> comp; 
    q.push(i);
    while(!q.empty()){
        x=q.front(); 
        q.pop(); 
        if(vis[x]) continue; 
        comp.push_back(x); 
        vis[x]++; 
        for(ll j: adj[x]){
            if(!vis[j])
            q.push(j); 
        }
        
    }
    for(ll j : comp) a[j]=comp.size(); 
}
 }
 fo(i,n) cout<<a[i]<< " ";


 return 0;
}