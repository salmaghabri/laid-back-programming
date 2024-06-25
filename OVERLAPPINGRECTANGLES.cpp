#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define fo(i,e) for(int i = 0; i < e; i++)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 bool in(pair<double,double> m,pair<int,int> p1,pair<int, int > p2){
    return(m.first>p1.first && m.first < p2.first && m.second>p1.second && m.second < p2.second);
 }

int main()
{
 fast_cin();
 int t;
 char c;
 cin>>t;
 for (int i=0;i<t;i++)
 {  int xl, xr,yl,yr;
 pair<int,int> p1,p2,p3,p4;
 pair<double,double> m; 
    
    cin>>xl>>yl>>xr>>yr;
    p1=make_pair(xl,yl);
    p2=make_pair(xr,yr);
    cin>>xl>>yl>>xr>>yr;
    p3=make_pair(xl,yl);
    p4 =make_pair(xr,yr);
     xr=min(p2.first,p4.first);
     yr=min(p2.second,p4.second);
     xl=max(p1.first,p3.first);
     yl=max(p1.second,p3.second);
     if(i>0) cout<<endl;
     m=make_pair((double)(xr+xl)/2,(double)(yr+yl)/2);
     if(in(m,p1,p2) && in(m,p3,p4)){
        cout<<xl<<" "<<yl<<" "<<xr<<" "<<yr<<endl;
     }else{
        cout<<"No Overlap"<<endl;
     }
      
     

 }
 


 return 0;
}