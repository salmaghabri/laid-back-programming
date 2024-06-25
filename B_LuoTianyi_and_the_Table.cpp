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
    int n,m; 
    cin>>n>>m; 
    int a[n*m]; 
    if(n<m) swap(n,m); 
    fo(i,n*m) cin>>a[i];

    sort(a,a+(n*m)); 
    int max1=a[n*m-1], max2=a[n*m-2],min1=a[0], min2=a[1]; 
    int faza=max(max1-min2, max2-min1); 
    int c1=(max1-min1)*( m*(n-1)) + faza*(m-1); 
    cout<<c1<<endl;
}

 return 0;
}