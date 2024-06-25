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
 string s; 
 ll k,n; 
 cin>>n>>k>>s; 
 if(s.size()==1 && k>0) {
    cout<<"0"<<endl; 
    return 0; 
 }


 for(int i=0;i< s.size()&& k>0; i++ ){
    if(i==0){
        if(s[0]=='1') continue;
        else{
            s[0]='1';
            k--; 
            continue;
        }
    }
  
    if(s[i]=='0') continue;
    s[i]='0'; 
    k--; 
   
 }
cout<<s<<ln;

 return 0;
}