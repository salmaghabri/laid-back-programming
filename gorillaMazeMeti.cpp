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
 char mat[31][31]; 
 int visited[31][31];
 int dp[31][31];
 int n,m;
 bool valid(int i,int j){
return (!visited[i][j] && i>=0 &&i <n && j>=0 &&j<m);
 }
ll solve(int i,int j,int walls){
    if(mat[i][j]=='G') return 0;
    // if(visited[i][j]) return 0;
    visited[i][j]=1;
    
    int c1=1000000000;
    int c2=1000000000;
    int c3=1000000000;
    int c4=1000000000;
    if(valid(i+1,j)){
        if(mat[i+1][j]=='#'){
            c1=solve(i+1,j,walls+1)+1+walls;
        }else{
            c1=solve(i+1,j,walls)+1;
        }
    }
    if(valid(i,j+1)){
         if(mat[i][j+1]=='#'){
            c2=solve(i,j+1,walls+1)+1+walls;
        }else{
            c2=solve(i,j+1,walls)+1;
        }
    }
    if(valid(i-1,j)){
         if(mat[i-1][j]=='#'){
            c3=solve(i-1,j,walls+1)+1+walls;
        }else{
            c3=solve(i-1,j,walls)+1;
        }
    }
    if(valid(i,j-1)){
        if(mat[i][j-1]=='#'){
        c4=solve(i,j-1,walls+1)+1+walls;
        }else{
        c4=solve(i,j-1,walls)+1;
 
        }
    }
    
return min(min(c1,c3),min(c2,c4));
}
int main()
{
 fast_cin();
 ll js,is,je,ie;
 cin >> n>>m;
fo(i,n){
    fo(j,m){
        cin>>mat[i][j];
        if(mat[i][j]=='S'){
            is=i;
            js=j;
        }
        if(mat[i][j]=='G'){
            ie=i;
            je=j;
        }
    }
}

cout<<solve(is,js,0);


 return 0;
}