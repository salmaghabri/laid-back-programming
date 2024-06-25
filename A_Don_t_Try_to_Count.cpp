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
    string x,s; 
    int n,m; 
    cin>>n>>m>>x>>s;
    string xx=x;
    int res=0;
    for(int i=0;i<455;i++){
        if(xx.find(s)!=-1) {
            break;
        }
        if(xx.size()>25){
            res=-1;
            break;
        }
        xx+=xx;
        res++;

    }
    cout<<res<<ln;
}

 return 0;
}