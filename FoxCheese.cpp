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
 int combien(int da){
     int d=2,s=0;
     if(da%2!=0 && da%3!=0 && da%5!=0 && da!=1 ) {
        return -1;
     }
 while(da>1){
    if(da%d==0){
        if(d>5){
            return -1;
        }
        s++;
        da/=d;

    }else{
        d++;
        
    }
 } 
 return s;
 }

int main()
{
 fast_cin();
 int a,b,da,db;
 cin>>a>>b;
 if(a==b){
    cout<<0<<endl; 
    return 0;
 }
 int p=__gcd(a,b);
 da=a/p; db=b/p;
 if(combien(da)==-1 || combien(db)==-1) cout<<-1;
 else cout<<combien(da)+combien(db);


 return 0; 
}