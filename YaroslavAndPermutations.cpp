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
 int f[1001]; 
 int j,dis=0;
 set<int> s;
 set<int> :: iterator i;
 bool flag=true;
 memset(f,0,sizeof(f));
 for(int i=0;i<n;i++) {
    cin>>a[i]; 
    s.insert(a[i]);
    f[a[i]]++;


 }
 
  for( i=s.begin();i!= s.end();i++){
    if(f[*i]-1>n-f[*i]){
        flag=false;
        break;
    }
    
  }
  flag? cout<<"YES": cout<<"NO";


 return 0;
}