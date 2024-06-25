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
    ll n; 
    cin>>n; 
    ll l=2, r=n, res=n; 
    while(l<=r){
        ll mid=(l+r)/2; 
        dbg(mid);
        if(mid*(mid- 1)/2<=2*n){
            res=min(res,mid); 
            l=mid+1; 
        }else{
            // res=min(res,mid); 
            
            r=mid-1; 

        }
    }
    if(res*(res-1)/2== n){
        cout<<res<<ln;
    }else{
    dbg(res);
        cout<<res+n-res*(res-1)/2<<ln; 
    }
    cout<<2648956421*(2648956421-1)/2<<ln;
}

 return 0;
}