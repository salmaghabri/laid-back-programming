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
    int b[n]; 
    fo(i,n) cin>>b[i]; 
    vector<int> a; 
    a.push_back(b[0]); 
    for(int i=1; i<n;i++){
        if(b[i] >= b[i-1]){
            a.push_back(b[i]);
                   }else{
                    a.push_back(b[i]); 
                    a.push_back(b[i]);
                   }
    }
    cout<<a.size()<<ln; 
    for(int aa: a){
        cout<<aa<<" "; 
    }
    cout<<ln;


}

 return 0;
}