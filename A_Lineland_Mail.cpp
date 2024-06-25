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
 ll mi[n], ma[n], d[n],l=0,u=n-1; 
fo(i,n) cin>> d[i]; 
fo(i,n){
    l=max(0LL,i-1);
    u=min(n-1,i+1);
    mi[i]= min(d[i]-d[l], d[u]-d[i]); 
    ma[i]=max(d[n-1]-d[i], d[i]-d[0]);
    if(i==0) mi[i]=  d[u]-d[i];
    if(i==n-1) mi[i]= d[i]-d[l]; 

}
fo(i,n) cout<<mi[i]<<" "<<ma[i]<<endl;

 return 0;
}