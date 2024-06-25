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
    vector<int> a(n); 
    fo(i,n){
        int x; 
        cin>>a[i]; 
        
    }
    
    
   
    string res="yes"; 
    for(int i=0; i<n ; i++){
        int l=0, r=n-1; 
        ll index=-1; 
        while(l<=r){
            ll  mid=(l+r)/2; 
            if(a[mid]<i+1){
                
                 r=mid-1; }
            else if(a[mid]>=i+1){ 
                index=mid; 
                l=mid+1; }
               
           
        }
        
        int count;
         count=index; 
        
    //    dbg(index); 
    //    dbg(count); 
     
        if(count+1!= a[i]){
           res="no"; 
           break;
        }
    }
    // cout<<n<<endl;
    cout<<res<<ln;
}

 return 0;
}