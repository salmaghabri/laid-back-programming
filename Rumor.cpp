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
 int visited[100000];
 int a[100000]; 
  vector<vector<int>> adj(100000);

int dfs(int i){
    if(visited[i]) return 1e9; 
    visited[i]++; 
    int m=a[i]; 
    for(int j : adj[i] ){
        m=min(dfs(j),m);
    }
    return m; 

}
int main()
{
 fast_cin();
 ll n,m;
 cin >> n>>m;
 int x,y; 
 ll s=0;
 memset(visited,0,sizeof visited);
 fo(i,n) cin>>a[i]; 
 fo(i,m){
    cin>>x>>y; 
    x--;y--; 
    adj[x].push_back(y);
    adj[y].push_back(x);
    
 } 
fo(i,n){
if(!visited[i]){
    s+=dfs(i); 
}
}
cout<<s<<endl; 
 return 0;
}