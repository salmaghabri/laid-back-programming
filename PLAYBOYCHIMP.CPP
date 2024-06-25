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
 fo(i,n){
    cin>>a[i];
 }
 int q,x;
 int y,z;
 cin>>q;
 while(q--){
    cin>>x;
    bool mijoud=false;
    int l=-1,r=n-1,m,p,g;
    while(l<r){
        m=(l+r+1)/2;
        if(a[m]<x){
            l=m;
        }else if(a[m]>x){
            r=m-1;
        }else{
            mijoud=true;
            break;
        }
    }
    if(mijoud){
        y=upper_bound(a,a+n,x)-a;
        
        z=lower_bound(a,a+n,x)-a;
        if(z-1<0){
            p=-1;
        }else{
            p=a[z-1];
        }
        if(y>=n){
            g=-1;
        }else{
            g=a[y];
        }
    }else{
        if(l==n-1){
            p=a[l];
            g=-1;
        }else if(l==-1){
            p=-1;
            g=a[l+1];
        }else{
            p=a[l];
            g=a[l+1];
        }
        
    }
   
    (p==-1)? cout<<'X'<<" ": cout<<p<<" ";
    (g==-1)? cout<<'X'<<endl: cout<<g<<endl;
 }


 return 0;
}