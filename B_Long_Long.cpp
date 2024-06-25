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
    fo(i,n ) 
        cin>>a[i]; 

    int oddch=(a[0]<0);
    ll sum=abs(a[0]); 
    int i=0; 
    int count=0;
    bool b=false;  
    // bool atleast=false;
    while(i<n){
        b=false;  
        while(a[i]<=0){
            if(a[i]<0)
            b=true; 
            i++; 

        }
        if(b)
        {   
            
            count++;}
        i++;
    }

int neg=(a[0]<0); 
    for(int i=1; i<n;i++){
       
        
        sum+=abs(a[i]); 
    }
    // dbg(neg); 
    cout<<sum<<" "<<count<<ln;
    
        
        

    
}

 return 0;
}