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
 string s;
 cin>>s;
 int d,f;
 if(s.find_first_of("R")==-1){
    d=s.find_last_of("L")+1; 
    f=s.find_first_of("L");

    
 }else if(s.find_first_of("L")==-1){
    f=s.find_last_of("R")+2; 
    d=s.find_first_of("R")+1;

    
 }else{
    f=s.find_last_of("R")+1; 
    d=s.find_first_of("R")+1;

 }

cout<<d<<" "<<f;
 return 0;
}