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
 ll t;
 cin >> t;
while(t--){
    ll n,m; 
    cin>>n>>m; 
    char mat[n][m]; 
    fo(i,n)
    fo(j,m)
    cin>>mat[i][j]; 
    string name="vika"; 
    int cc=0; 
     fo(j,m){
        fo(i,n){
            if(mat[i][j]==name[cc]){
                cc++; 
                break; 
               
                

            }

        }
        
        
        }
        if(cc==4){
            cout<<"yes"<<ln; 
        }else cout<<"no"<<ln; 

}

 return 0;
}