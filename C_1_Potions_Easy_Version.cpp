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
  ll n;
  ll a[2002]; 
  ll mem[2002];
  ll solve(ll i, ll health){
    if(i>n-1) return 0; 
    if(health+a[i]<0) return 0; 
    ll c1=1+solve(i+1,health+a[i]);
    ll c2=solve(i+1,health);
    return max(c1,c2); 
  }

int main()
{
 fast_cin();

 cin >> n;
 memset(mem,-1,sizeof mem);

fo(i,n) cin>>a[i]; 
 
ll s=solve(0,0); 
cout<<s;
 return 0;
}