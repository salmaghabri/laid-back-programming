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
 int vis[150002] ; 
 vector<int> adj[150002]; 
 vector<int> ver; 

void dfs(int i, int p){
    if(vis[i]) return; 
    vis[i]=1; 
    ver.push_back(i);
    for(int n: adj[i] ){
        if(!vis[n]){
            dfs(n,i); 
        }
    }
    return;  

}
int main()
{
 fast_cin();
 int n,m,u,v;
 cin >> n>>m;
 fo(i,m){
    cin>>u>>v;
    u--; v--; 
    adj[u].push_back(v); 
    adj[v].push_back(u); 

 }
 fo(i,n){
    if(!vis[i]){
        dfs(i,-1); 
       // dbg(ver.size());
        for(int j : ver){
            if(adj[j].size()<ver.size()-1){

            cout<<"NO"<<ln; 
            return 0; 
            }

        }
       
        
    }
    ver.clear();
 }
cout<<"YES"<<ln; 

 return 0;
}