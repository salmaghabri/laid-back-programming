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
 int n,mini=1e9,t;
 cin >> n;
 int a[n];
 string s; cin>>s;
 fo(i,n) cin>>a[i];
int i=s.find("RL"); 
if(i==-1){ cout<<-1;
return 0;}
while(i!=-1){
    t=((a[i]+a[i+1])/2)-a[i];
    mini=min(t,mini);
    i=s.find("RL",i+1);

}
cout<<mini<<endl;
 return 0;
}