#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define fo(i,e) for(ll i = 0; i < e; i++)
#define foi(i,e) for(int i = 0; i < e; i++)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
 fast_cin();
 int n,x;
 cin>>n>>x;
 int a[n];
 foi(i,n) cin>>a[i];
 int finish=min(x-1,n-x);
 int s=0,d,f;
 if(finish==0){
    foi(i,n) s+=a[i];
    cout<<s<<endl;
    return 0;
 }
 s=a[x-1];
 for(int i=1;i<=finish;i++){
    d=x-1-i; 
    f=x-1+i;
    if(a[d]==a[f] && a[d]) s+=2;

 }
 
 if(d<=0){
    for(int i=f+1;i<n;i++) s+=a[i];

 }else for(int i=d-1;i>=0;i--) s+=a[i];

cout<<s<<endl; 
 return 0;
}