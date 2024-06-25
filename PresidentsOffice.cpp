#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define fo(i,e) for(int i = 0; i < e; i++)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 int n,m;
 char c;
 map<char,int> ma; 
 cin >> n>>m>>c;
 char mat[n][m];
 fo(i,n){
    fo(j,m){
        cin>>mat[i][j];
    }
 }
  fo(i,n){
    fo(j,m){
        if(mat[i][j]==c){
            ma[c]++;
            if(i-1>=0){
                ma[mat[i-1][j]]++;
            }
            if(i+1<n){
                ma[mat[i+1][j]]++;
            }
            if(j+1<m){
                ma[mat[i][j+1]]++;

            }
            if(j-1>=0){
                ma[mat[i][j-1]]++;


            }
        }
    }
 }
 int s=0;
 for(char d='A';d<='Z';d++){
    if(ma[d]>0) s++;

 }
cout<<s-1<<endl;

 return 0;
}