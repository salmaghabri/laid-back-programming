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
    ll a[n],v[n],u[n];
 fo(i,n){
    cin>>a[i];
 }
 v[0]=a[0];
 for(int i=1;i<n;i++){
    v[i]=v[i-1]+a[i];
    

 }
 sort(a,a+n);
  u[0]=a[0]; // dha7aya l copier/coller
 for(int i=1;i<n;i++){
    u[i]=u[i-1]+a[i];

 }
 int m,l,r,type;
 cin>>m;
 while(m--){
    cin>>type>>l>>r;
    l--;r--;
    if(type==1){
        if(l==0) cout<<v[r]<<endl;
        else
        cout<<v[r]-v[l-1]<<endl;
        
    }else{
        if(l==0) cout<<u[r]<<endl;
        else
        cout<<u[r]-u[l-1]<<endl;//dha7aya l copier/coller
    }
 }



 return 0;
}