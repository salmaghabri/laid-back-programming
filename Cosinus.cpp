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
 int findClosestInteger(double a) {
    double closestMultiple = round(a / 90) * 90;
    double closestOddMultiple;
    if (fmod(closestMultiple, 2) == 0) {
        closestOddMultiple = (a > closestMultiple) ? closestMultiple + 90 : closestMultiple - 90;
    } else {
        closestOddMultiple = closestMultiple;
    }
    int x = round(closestOddMultiple / a);
    return x;
}

int main()
{
 fast_cin();
 ll t;
 cin >> t;
while(t--){
    double a; 
    cin>>a; 
    double pi = M_PI;
    double jsp=90/a; 
    dbg(jsp);
    // see if the cos can get to 0
    // int l=1, r=INT_MAX;
    // while(l<=r){

    // }
    // cout<<findClosestInteger(a)<<ln;
    cout<<(88.817841970012523233890533447265625*154618822656)/(90*10000000000000000);
    
}

 return 0;
}