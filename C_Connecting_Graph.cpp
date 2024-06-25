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
const int MAX_N=100001; 
int n, par[MAX_N], sz[MAX_N];


map<pair<int,int> , ll> ti;   
int find(int u) {
    if(u == par[u] ) return u; 
    return par[u] = find(par[u]);
}
 
void merge(int u, int v, int m) {
    int pu = find(u), pv = find(v);
    if (pu == pv) return;
    if (sz[pu] > sz[pv]) swap(pu, pv);
    par[pu] = pv;
    pair<int,int> p=make_pair(u,v); 
    sz[pv] += sz[pu];
    ti[{u,v}]=m; 
    // if(pu< u ) swap(pu,u);
    // ti[{pu,u}]=m; 
    if(pv< pu ) swap(pv,pu);
    // dbg(pu); 
    // dbg(pv); 
    ti[{pv,pu}]=m; 
    // ti[{pv,v}]=m; 
}

int main()
{
//  fast_cin();
 ll t;
 cin >> t;
 while(t--){
    int  m ; 
    cin>>n>>m; 
    for (int i = 0; i < n; i++) par[i] = i, sz[i] = 1;
    for(int j=1; j<=m;j++){
        int type, u,v; 
        cin>>type>>u>>v; 
        u--; v--; 
        if(v>u) swap(u,v); 
        int uu=find(u), vv=find(v); 
        if(type==1 ){
            merge(u,v,j); 

        }else{
            pair<int,int> p=make_pair(u,v); 
          ll x=ti[{ u ,v}];
          if(x)
            {
                cout << x <<endl;}

            else cout << -1<<endl; 

          
            

        }
    }

 }


 return 0;
}