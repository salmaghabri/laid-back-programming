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
 ll tt;
 cin >> tt;
while(tt--){
    int n,m,h;
    cin>>n>>m>>h; 
    int t[n][m]; 
    fo(i,n){
        fo(j,m)
        cin>>t[i][j]; 
        
    }
    ll rudolfs=0; 
    ll rudolfp=0; 
    ll ranking=1;
    fo(i,n){
        sort(t[i],t[i]+m); 
        ll time=0; 
        ll score=0, penalty=0; 
        fo(j,m){
            if(time+ t[i][j]<=h ){
                score++; 
                time+=t[i][j]; 
                penalty+=time;
            }

        }
        if(i==0){
            rudolfs=score; 
            rudolfp=penalty;

        }else{
            if(score> rudolfs){
                ranking++; 
            }else if (score==rudolfs){
                if(penalty<rudolfp)
                ranking++;

            }
        }
    }
     
cout<<ranking<<ln;
}

 return 0;
}