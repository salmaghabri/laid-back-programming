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
    ll m, k ,a1,ak; 
    cin>>m>>k>>a1>>ak;
   ll res=0;  
   ll divk= m/k; 
   ll modk= m%k; 
   
 ak=min(ak, divk);

   m-=(k*ak); 
   if(m<=a1){
    cout<<0<<endl; 
   }else{
    // m-=a1; 
   divk=m/k; 
    ll res=divk+ (m-divk*k)%k; 
    ll modkdivk= m/k; 
    ll elmod=m%k; 
   
    for(ll i=1; i<=a1; i++){
    ll mm=m;
 
        mm-=(i); 
        modkdivk= mm/k; 
        mm-=(k*modkdivk); 
        
        res=min(modkdivk+mm, res); 



    }
    int l=0, r=a1; 
    
    while(l<=r){
        ll mid =(l+r)/2; 
        ll mm=m;
        m-=mid;
        modkdivk= mm/k; 
        mm-=(k*modkdivk); 

        
    }

  


    cout<<res<<ln;
   }

}

 return 0;
}