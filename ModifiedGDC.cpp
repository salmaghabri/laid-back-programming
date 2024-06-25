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
 ll a,b,high,low,n,p,m,l,r;
 vector<ll> v;
 cin >> a>>b>>n;
 p=__gcd(a,b);
 for(ll i=1;i*i<=p;i++){
    if(p%i==0){
        v.push_back(i);
        if(!(p/i==i))
        v.push_back(p/i);

    }
    
 }
 sort(v.begin(),v.end());
 
 
 
 
 while(n--){
    cin>>low>>high; 
    if(low>p){
        cout<<-1<<endl;
        continue;
    }
    if(high>=p){
        cout<<p<<endl;
        continue;
    }
    l=0; r=v.size()-1;
    while(l<r){
        m=(l+r+1)/2;
        if((v[m]<=high && v[m]>=low)){
            l=m;
 
        }else if(v[m]>high){
            r=m-1;
        }else if((v[m]<low)){
            l=m+1;
        }
 
    }
 
    (v[r]<=high && v[r]>=low)? cout<<v[r]<<endl: cout<<-1<<endl;
 
 }
 
 
 
 return 0;
} 