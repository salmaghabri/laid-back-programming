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
 map<string,int> m;
 m.insert({"Icosahedron",20});
 m.insert({"Cube",6});
 m.insert({"Tetrahedron",4});
 m.insert({"Octahedron",8});
 m.insert({"Dodecahedron",12});
 int r=0, t;
 cin >> t;
while(t--){
    string s; 
    cin>>s; 
    r+=m[s];
}
cout<<r;
 return 0;
}