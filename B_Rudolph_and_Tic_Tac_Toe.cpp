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
 

int main()
{
 fast_cin();
 ll t;
 cin >> t;
while(t--){
    char mat[3][3]; 
    string res="DRAW";
    fo(i,3){
        fo(j,3){
            cin>>mat[i][j]; 
        }
    }
    fo(i,3){
        if(mat[i][0]== mat[i][1] && mat[i][1] ==mat[i][2] && mat[i][0]!='.' ) {
            res=mat[i][0]; 
        }else if(mat[0][i]== mat[1][i] && mat[1][i] ==mat[2][i]  && mat[0][i]!='.' ) {
            res=mat[0][i]; 
        }

    }
    if(mat[0][0] ==mat[1][1] && mat[0][0] ==mat[2][2]  && mat[0][0]!='.' ) res=mat[0][0];
    else if(mat[0][2]== mat[1][1] &&  mat[1][1]==mat[2][0]  && mat[1][1]!='.')  res=mat[1][1];
    cout<<res<<ln;
}

 return 0;
}