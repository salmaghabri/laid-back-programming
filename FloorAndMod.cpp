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
 int t,x,y; 
 cin>>t;
 while(t--){
 cin>>x>>y;
int m,mm; 
if(x>y){
    m=y;
}else{
    m=x-1; 
}
ll s=0; 
for(int i=2;i<=m;i++){
    s+=min(i-1,x/(i+1)); 
}
cout<<s<<endl;
 }
 return 0;
}