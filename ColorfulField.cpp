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
 ll n,m,k,t,a,b;
 cin >>n>>m>>k>>t;
 vector<int > w;
 
 
 while(k--){
    cin>>a>>b;
    --a;--b;
    w.push_back(a*m+b);

 }
 sort(w.begin(),w.end());
 int x,av,d;
 while(t--){
    string s; 
    cin>>a>>b;
    a--;b--;
    x=a*m+b;
    dbg(x);
    if(x<w[0]){
        d=x%3;
        

    }else{
    av=lower_bound(w.begin(),w.end(),x)-w.begin();
    dbg(w[av]);
    if(w[av]==x) { s="Waste";
    cout<<s<<ln;
    continue;
    }
    d=(x-av)%3;

    
    
    
    }

    if (d==0){
        s="Carrots";
    }
    else if (d==1){
        s="Kiwis";
    }
    else {
        s="Grapes";

    }
    cout<<s<<ln;
    
 }


 return 0;
}