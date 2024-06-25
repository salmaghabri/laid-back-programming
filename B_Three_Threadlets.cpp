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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    
    int op=0;
    sort(a,a+3); 
    int mi=a[2];
    int gcd=__gcd(a[0],a[2]);
    gcd=__gcd(gcd,a[1]);
    fo(i,3){
        op+=(a[i]/gcd);
        op--;
        
        
    }
   
     if(op>3) cout<<"NO"<<ln;
        else cout<<"YES"<<ln;
   
}

 return 0;
}