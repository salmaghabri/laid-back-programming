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
 ll r1,r2,c1,c2,d1,d2;
 cin >> r1>>r2>>c1>>c2>>d1>>d2;
 int a[4]; 
 bool possible=false;
 set<int>s;
 for(int j=1;j<10;j++){
    a[0]=j;
    a[1]=r1-j;
    a[2]=c1-j;
    a[3]=d1-j;
    s.insert(a[0]);
    s.insert(a[1]);
    s.insert(a[2]);
    s.insert(a[3]);
    if(a[1]>0 && a[2]>0 && a[3]>0 && a[1]<=9 && a[2]<=9 && a[3]<=9  && s.size()==4 && a[2]+a[3]==r2 && a[1]+a[3]==c2 && a[1]+a[2]==d2){
        possible=true;
        break;
    }
    s.clear();
 }

if (possible){
    cout<<a[0]<<" "<<a[1]<<ln<<a[2]<<" "<<a[3];
}else{
    cout<<-1;
}
 return 0;
}