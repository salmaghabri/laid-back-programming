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
 int bs(int x,int [] a){
    int l=0, r=n-1,res;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]>x){
            r=m-1;
            
        }else{
            res=m;
            l=m+1;
            


        }
    }
    return res; 
 }

int main()
{
 fast_cin();
 ll t;
 cin >> t;
while(t--){
    int n,x; 
    cin>>n>>x;
    int a(n);
    fo(i,n) {cin>>a[i]; }
    sort(a,a+n);
    int w[n];
    for(int i=1;i<x;i++){
        dbg(bs(i,a)); 

    }


    // w[1]=0;
    // int j=0;
    // for(int h=2;h<x;h++){
    //     // dbg(h);
    //     // int cost=0;
    //     // while(a[j]<h){
    //     //     cost+=(h-a[j]);
    //     //     j++;

    //     // }
    //     w[h]=w[h-1]+h;
    //     dbg(w[h]);


    // }

}

 return 0;
}