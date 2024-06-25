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
    int n; cin>>n;
    int a[n],pref[n], suff[n],l=-1,rr=-1;
    map<int,int> m1,m2;
    fo(i,n){
        cin>>a[i];
    }
    int r=0;
    fo(i,n){
        r+=a[i];
        pref[i]=r;
        m1[r]=i;

    }
    r=0;
    rforsn(i,n-1,0){
        r+=a[i];
        suff[i]=r;  
        m2[r]=i;

    }
    fo(i,n){
        if(m2.find(pref[i]) != m2.end() && m2[pref[i]] > i ){
            l=i; rr=m2[pref[i]];
        }
    }
    if(rr==-1) cout<<0<<endl;
    else{
        cout<<l + n-rr +1<<endl;
    }
}

 return 0;
}