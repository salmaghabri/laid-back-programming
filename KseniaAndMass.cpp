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
 string s,ss,smin,smax;
 cin>>s;
 cin>>ss;
 int r=s.find('|'),l,d;
 l=s.size()-r-1;
 d=l-r;


 if(abs(d)>ss.size() || ((ss.size()-d)%2)){
    cout<<"Impossible";
 }else{
    d=abs(d);
   
    int x=d+((ss.size()-d)/2);
        smin=ss.substr(0,x);
        ss.erase(0,x);
        if(r>l){
            s.insert(r+1,smin);
            s.insert(0,ss);
        }else{
            s.insert(r+1,ss);
            s.insert(0,smin);
        }
        cout<<s<<endl;


        

    // }else{
    //     s.insert(0,sss);
  

    }

    
 


 return 0;
}