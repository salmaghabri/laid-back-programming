#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define fo(i,e) for(ll i = 0; i < e; i++)
#define foi(i,e) for(int i = 0; i < e; i++)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 int n;
 const int MAX=101;
 char  mat[MAX][MAX];
 int  visited[MAX][MAX];
 void dfs(int i,int j){
    if(i<0 || i>=n || j<0 || j>=n) return;
    if(visited[i][j] || mat[i][j]=='.') return;
    visited[i][j]++;
    //dfs(i-1,j);
    dfs(i+1,j);
    
    //dfs(i,j-1);
    
    dfs(i,j+1);
    
 }

int main()
{
 fast_cin();
 int t;
 cin>>t;
 foi(k,t){
    cin>>n;
    memset(visited,0,sizeof visited);
    int s=0;
    foi(i,n){
        fo(j,n){
            cin>>mat[i][j];
        }
    }
    foi(i,n){
        fo(j,n){
            if(!visited[i][j]&& mat[i][j]=='x'){
                s++;
                dfs(i,j);
            }
        }
    }
    cout<<"Case "<<k+1<<": "<<s<<endl; 

 }


 return 0;
}