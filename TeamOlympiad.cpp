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
 vector<int> one;
 vector<int> two;
 vector<int> three;
 cin>>n;
 int x,a=0,b=0,c=0;
 fo(i,n){
    cin>>x;
    if(x==1){
        one.push_back(i+1);
        a++;
    }else if(x==2){
        two.push_back(i+1);b++;
    }else{
        three.push_back(i+1);c++;
    }
 }
 int r,m;
 r=min(a,b);
 r=min(r,c);
 cout<<r<<endl; 
 for (int i = 0; i < r; i++)
 {
    cout<<one[i]<<" ";
    cout<<two[i]<<" ";
    cout<<three[i]<<endl;
 }
 






 return 0;
}