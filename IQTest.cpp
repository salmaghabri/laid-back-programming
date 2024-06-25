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
 char a[4][4];
 int w=0,b=0;
 fo(i,4){
    fo(j,4){
    cin>>a[i][j];
    (a[i][j]=='.')? w++: b++;
    
    
    }
 }
  if(w-b){
    cout<<"YES";

  }else{
    for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        
        if(a[i+1][j]==a[i][j]){
            if((j!=3 && a[i][j+1]==a[i][j])|| (a[i][j]==a[i+1][j-1]) ){
                cout<<"YES";
            return 0;

            }
        }

    
    
    
    }
 }
    cout<<"NO";
  }

    
 


 return 0;
}