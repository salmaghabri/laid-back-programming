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
    ll n,x,y; 
    cin>>x>>y>>n; 
    int a[n]; 
    a[0]= x; 
    a[n-1]= y; 
    int sum=(1+(n-1))*(n-1)/2; 
   

    
    if(y-x < sum) {
        cout<<-1<<ln; 
        continue;
    }
   

    int b= 1; 
   
    for(int i=n-2; i>0; i--){
        a[i]= a[i+1]-b; 
        if(i)
        b++;  
    }
   
   
   
    
    
        fo(i,n) cout<<a[i]<<" "; 
        cout<<ln;
    
}

 return 0;
}