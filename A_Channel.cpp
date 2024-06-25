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
    ll n, a,q; 
    cin>>n>>a>>q; 
    string s; 
    cin>>s; 
    if(a==n){
        cout<<"YES"<<ln; 
        continue;
    }
    int diff=n-a, streak=0; 
    bool maybe=false,yes=false; 
    fo(i,q){
        if(s[i]=='+'){
            streak++;
        
            a++;
            if(a== n){
                yes=true;
                break;
            }
        }else{
            
            a--; 
        }
    }
   
    if(yes){
        cout<<"YES"<<ln; 
    }else if (streak< diff)cout<<"NO"<<ln;
    else cout<<"MAYBE"<<ln;

}

 return 0;
}