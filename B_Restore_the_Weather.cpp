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
    int n, k ; 
    cin>>n>>k ;
    int a[n], b[n], aa[n]; 
    vector<pair<int,int>> v; 

    fo(i,n) {
    cin>>a[i]; 
    v.push_back({a[i], i}); 

    }
    fo(i,n) cin>>b[i]; 
    sort(v.begin(), v.end()); 
    int res[n]; 
    // for(auto i: v){
    //     dbg(i.first);
    //     dbg(i.second);
    // }
    sort(b,b+n); 
    // for(int bb: b){
    //     dbg(bb);
    // }
    for(int i=0; i<n;i++){
        res[v[i].second]= b[i]; 
    }
    fo(i,n){
        cout<<res[i]<<" ";

    }
    cout<<ln;
}

 return 0;
}