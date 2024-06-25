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
 int n;
 cin >> n;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 int m,x,y; 
 cin>>m; 
 for (int i = 0; i < m; i++)
 {
    cin>>x>>y;
    if(x!=1){
        a[x-2]+=(y-1);
    }
    if(x!=n){
         a[x]+=(a[x-1]-y);

    }
    a[x-1]=0;
 }
 fo(i,n){
    cout<<a[i]<<endl;

 }


 return 0;
}