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
 int n,j=0;
 float x;
 cin >> n;
 int a[n],b[n];
 fo(i,n){
    cin>>a[i];
    if(a[i]%2==0){
        b[i]=a[i]/2;
    }else {
        if(j%2){
            b[i]=(a[i]+1)/2;

            

        }else{
            b[i]=(a[i]-1)/2;

        }
        j++;
    }
 }
 fo(i,n)
 cout<<b[i]<<endl;




 return 0;
}