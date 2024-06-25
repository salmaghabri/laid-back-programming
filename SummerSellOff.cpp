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
 int n,f,x; 
 cin>>n>>f; 
 vector<pair<int,int>> v;
 int k[n], l[n]; 
 fo(i,n){
    cin>>k[i]>>l[i];
    if(k[i]==0){
      x=0;

    }else if (2*k[i]<=l[i]){
      x=k[i];
    }else {x=l[i]-k[i];}
    v.push_back(make_pair( max(0,x),i));
 }
 sort(v.begin(),v.end());
 for(int i=n-1,j=0;j<f;i--){
   k[v[i].second]*=2;
   j++;

 }
 ll s=0; 
 for(int i=0;i<n;i++){
   s+=min(k[i],l[i]);

 }
cout<<s;


 return 0;
}