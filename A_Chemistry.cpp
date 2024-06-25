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
    ll n,k; 
    string s;
    cin>>n>>k>>s; 
    map<char,int> m; 
    fo(i,n){
        m[s[i]]++; 

    }
    int newLength= n-k,sum=0; 
    bool pair=(newLength%2 == 0 ), cbon=false,possible=false;
    int p=0, imp=0; 
    if(pair)
    for(auto i: m){
        if(i.second >= newLength){
            possible=true;
            break;
        }
        if(i.second%2 ==0 ){
            p++;
            sum+=i.second; 
        }else{
            p--; 
        }
        if(sum==newLength){
            possible=true;
            break;
        }
    }else 
     for(auto i: m){
        if(i.second >= newLength){
            possible=true;
            break;
        }
        if(i.second%2 ==0 ){
            sum+=i.second; 
        }else if(! cbon){
            cbon=true;
            sum+=i.second; 

        }
        if(sum==newLength){
            possible=true;
            break;
        }
}
cout<<(possible? "YES": "NO")<<endl;

}
 return 0;
}