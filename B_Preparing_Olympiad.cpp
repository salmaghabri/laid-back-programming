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
 
void printBinary(int num) {
    if (num > 1)
        printBinary(num / 2);
    cout << num % 2;
}

int main()
{
 fast_cin();
 int n,l,r,x;
 cin >> n>>l>>r>>x;
 int a[n];
 int res=0;
 fo(i,n) cin>>a[i];
 int lkol=1;
 for(int i=1; i<=n;i++) lkol*=2;

 for(int i=3; i<=lkol ; i++){ // 3 car at least 2
 int k=i;
 if(i && !(i & (i - 1))) continue;


  ll sum=0;
 int mi=INT_MAX, ma=INT_MIN;
 for(int j=0; j<n; j++){
    
    bool b=(k>>j) & 1;
    if(b){
        mi=min(mi, a[j]);
        ma=max(ma, a[j]);
         sum+=a[j];
         }
 }
   if(ma- mi >= x && sum>= l && sum<= r){
    res++;


   }
 
 }
cout<<res<<ln;

 return 0;
}