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
    int a[n]; 
    int f[n+1]; 
    fo(i,n){
        cin>>a[i]; 
        f[a[i]]=i; 
    }
    
    int maxi=n; 
    if(f[n]==0) maxi=n-1;
    int imax=f[maxi]-1, maxa=0; 
    for(int i= f[maxi]-1; i>=0; i--){
        if(a[i]>maxa){
            imax=i; 
            maxa=a[i]; 
        }
    
    }
    
    int count=0; 
    for (int i= f[maxi]-1; i>0; i--){
        if( a[i]> a[0] ) break;
        count++; 
        
            
        
    }
    cout<<count<<endl; 
    int res[n]; 
    for(int i= f[maxi]; i<n;i++){
        if(i-f[maxi]>-1)
        res[i-f[maxi]]= a[i]; 
    }

    
}

 return 0;
}