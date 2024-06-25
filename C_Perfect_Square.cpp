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
    int n;
    cin>>n; 
    char mat[n][n]; 
    fo(i,n)
    fo(j,n)
    cin>>mat[i][j]; 
    vector<pair<string,string>> v(n);
    fo(i,n){
        string ss=""; 
        string sss=""; 
        for(int j=n-1;j>=0;j--){
            ss+=mat[j][i];
        }
        fo(j,n){
            sss+=mat[i][j];
        }
        v[i]={ss,sss};
    }
    int res=0;
    fo(i,n){
        string toul=v[i].first;
        string ordh=v[i].second;
        fo(j,n){
            res+=abs(toul[j]-ordh[j]);
        }

    }
    cout<<res<<ln;


}

 return 0;
}