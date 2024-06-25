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
int n,e=0;
cin>>n;
int a[n];
fo(i,n){
    cin>>a[i];
}
int s=a[0];
e=-a[0];
for(int i=0;i<n-1;i++){
    
    e+=(a[i]-a[i+1]);
    if(e<0){
        s=max(s,abs(e));
    }

}

cout<<s<<endl;

 return 0;
}