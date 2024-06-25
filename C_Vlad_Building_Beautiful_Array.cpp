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
    int odd=0, even=0, minOdd=1000000001, minEven=1000000001; 
    fo(i,n){
        cin>>a[i]; 
        if(a[i]%2) {
            odd++;
            minOdd=min(minOdd, a[i]); 
            }
        else {
            minEven=min(minEven, a[i]); 

            
            even++; }
    }

    if(odd==0 ||even ==0 || (minOdd < minEven)  ) {
        cout<<"yes"<<ln; 
        continue;
    }
        cout<<"no"<<ln; 
   
}

 return 0;
}