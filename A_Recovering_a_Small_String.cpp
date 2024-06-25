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
    int n;
    cin>>n;
    string res="";
    char hrouf[26];
    char c='a';
    fo(i,26){
        hrouf[i]=c;
        c++;
    }
    int j=0;
    fo(i,26){
               

       fo(j,26){
        fo(k,26){
            if(i+j+k+3 == n) {
                res=hrouf[k];
                res+=hrouf[j];
                res+=hrouf[i];
            }
        }
       }
        


    }
    
    
    cout<<res<<ln;
}

 return 0;
}