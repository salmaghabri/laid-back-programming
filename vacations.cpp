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
int mem[101][4];

 int vacations(int i, int prev,int n, int* a){
    if(i==n) return 0;
    if(mem[i][prev]!=-1) return mem[i][prev];

    if(a[i]==0 || a[i]==prev) return mem[i][prev]=vacations(i+1,0,n,a);
    int c1=0,c2=0;
    if((prev!=1) && (a[i]==1 || a[i]==3)) {
         c1=1+vacations(i+1,1,n,a);
    }
    if ((prev!=2) && (a[i]==2 || a[i]==3)) {
         c2=1+vacations(i+1,2,n,a);
         }

         return mem[i][prev]=max(c1,c2);
 }
int main()
{
 fast_cin();
 int n;
 cin >> n;
 int a[n];
 foi(i,n) cin>>a[i];
 memset(mem,-1,sizeof(mem));
 cout<<n-vacations(0,0,n,a);
 


 return 0;
}