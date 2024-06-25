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
vector<ll> res(9,0); 


int main()
{
 fast_cin();
 ll t;
 cin >> t;
while(t--){
    ll n; 
    cin>>n; 
    // ll sq=sqrt(n); 
    // solve(n,sq); 
    ll div9= n/9; 
    n-=(div9*9); 
    ll div4=n/4;
    // for(int i=1; i<=9;i++){
    //     for(int j=i+1; j<10;j++){
    //         for(int k=j+1; k<10;k++)
    //             {dbg(i);
    //             dbg(j);
    //             dbg(i*i+j*j+k*k);}
            
    //     }
    // }
     
}

 return 0;
}