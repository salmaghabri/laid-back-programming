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
 int n,k;
 cin >> n>>k;
 int a,b,ap,bp;
 double d,s=0;
 cin>>ap>>bp;
 for(int i=1;i<n;i++){
    cin>>a>>b;
    d=pow(pow(a-ap,2)+pow(b-bp,2),0.5);
    s+=d;
    bp=b;ap=a;


 }
 d=(double)s/50;
 d=d*k;
// cout.precision(9);
// cout<<d<<endl;
printf("%.9f",d);

 return 0;
}