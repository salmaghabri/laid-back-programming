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
 string s,ss; 
 cin >> s;
 ss=s.substr(0);
 ll sum=0,i=0,av,ap; 
 int pos=0;
 int x=s.find("bear"); 
 while(x!=-1){
   i++;
    
    ap=s.size()-(x+4);
    av=x+1;
    
    sum+=(ap+1)*av;
    sum-=(2*i);
    pos+=(x+4);
   x=s.find("bear",pos);




 }
cout<<sum;

 return 0;
}