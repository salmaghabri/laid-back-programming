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
 vector<int> adj[101]; 

 int coul[101]; 
 int vis[101];
int dfs(int i, int par){
if(vis[i]) return 0; 

    vis[i]=1; 
    int s=0; 
    coul[i]=1-par; 
    for(int n : adj[i]){
        if(!vis[n]) 
        s= dfs(n,coul[i]); 
        else{
            if(coul[n]==coul[i])
            s=1; 
        }
    }
return s; 

}
int main()
{
 fast_cin();
 
ll n,m,u,v;
 cin >> n>>m;
 memset(coul,-1,sizeof coul);
 memset(vis,0,sizeof vis);

 fo(i,m){
    cin>>u>>v;
    u--; v--; 
    adj[u].push_back(v); 
    adj[v].push_back(u); 

 }
 ll s=0; 
 fo(i,n){
    if(!vis[i])
    s+=dfs(i,0); 

 }if((n-s)%2) s++; 
cout<<s; 
 return 0;
}