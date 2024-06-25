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
 ll n;
 cin >> n;
  set<ll> f; 
 ll a[n];
 ll cnt,s=0;  
 fo(i,n) {
    cin>>a[i]; 
    f.insert(a[i]); 

 }
 for (auto i : f){
    s+=i;
 }
 
 cnt=f.size(); 
 ll x=s/cnt; 
if(cnt ==2){
    cout<<"YES"; 
    return 0; 
}
 if(s%cnt ) {
    cout<<"NO";
    return 0;
     }

    
    for(ll i=0;i+1<n;i++){
        if(a[i]==x) continue; 
        if(abs(a[i]-x) !=abs(a[i+1]-x) && abs(a[i+1]-x)!=0){
            cout<<"NO"; 
            return 0; 
        } 

    }
 
cout<<"YES";

 return 0;
}