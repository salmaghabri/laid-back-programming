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
 vector<int> adj[100001]; 
 vector <int> jmeaa[2]; 
 int coul[100001]; 
 int vis[100001]; 
 bool flag=1; 
void dfs(int i, int par){
    if(vis[i]){
        if(coul[i]==par)
        flag=0; 
        return ; 
    }
    vis[i]=1; 
    coul[i]=1-par; 
    jmeaa[coul[i]].push_back(i);
    for(int n : adj[i]){
        // if(!vis[n]) 
        dfs(n,coul[i]); 
    }

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
 fo(i,n){
    if(!vis[i]) dfs(i,0); 
 }
 if(flag){
    cout<<jmeaa[0].size()<<ln; 
    for(int i : jmeaa[0]) cout<<i+1<<" "; 
    cout<<ln;
    cout<<jmeaa[1].size()<<ln; 
    for(int i : jmeaa[1]) cout<<i+1<<" "; 

 }else cout<<-1;


 return 0;
}