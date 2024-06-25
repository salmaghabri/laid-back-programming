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
 int a[4]; 
 fo(i,4){
    cin>>a[i]; 
 }
 
 fo(i,4){
    for(int j=i+1; j<4; j++){
       
    }
 }
 for(int i=1; i<=8;i++){
    int zeros=0, ones=0; 
    for(int j=0; j<4;j++){
        if(i>>j &1 ) ones+=a[j]; 
        else zeros+=a[j]; 


    }
    if(ones==zeros){ cout<<"YES"<<ln; return 0; }
 }
cout<<"NO"<<ln;


 return 0;
}