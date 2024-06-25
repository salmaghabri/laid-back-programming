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
 int a,x,y;
 cin >> a>>x>>y;

if(y<a ){
    if(abs(x)<a){
        cout<<1;
    }else{
        cout<<-1;
    }
    return 0;
}
y-=a; 
int k=y/a; dbg(k);
if(k%2){
    
    (abs(x)<a/2)? cout<<((k+1)/2)*3-1:cout<<-1; 
}else{
    if(abs(x)>=a || x==0) cout<<-1;
    else{
        (x>0)? y=(((k-1)/2)*3+1):y=(k-1)*3/2; 
        cout<<y;
    }
}


 return 0;
}