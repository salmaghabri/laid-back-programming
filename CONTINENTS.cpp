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
 
char mat[21][21];
int vis[21][21];
int n;
int m;
ll nb;
bool valid(ll i,ll j){
    return (i<n && j<m && j>=0 && i>=0);
}
void dfs(ll i,ll j){
    if(!valid(i,j)) return ;
    
    if( vis[i][j] || mat[i][j] =='w' ) return ;
    // dbg(i);
    // dbg(j);
     
    nb++;
   
    vis[i][j]=1;
    int s=0;
    dfs(i,j-1);
    dfs(i+1,j);
    dfs(i,j+1);
    dfs(i-1,j);
    
 


}
int main()
{
 fast_cin();
 
 while(cin>>n){
    cin>>m;
   
 memset(vis,0,sizeof vis);
 fo(i,n){
    fo(j,m){
        cin>>mat[i][j];
    }
 }
    int a,b,pp;
    cin>>a>>b;
    nb=0;
    dfs(a,b); 
 ll mx=0LL;
 fo(i,n){
    fo(j,m){
        if(mat[i][j]=='l' && !vis[i][j]){
           // cout<<"hii     "<<ln;
            nb=0;
            dfs(i,j);
            mx=max(mx,nb);
        }
    }
 }
cout<<mx<<ln;
}

 return 0;
}