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
 char c='g';
 double a,b,aa,bb,x=15,y=16;
 vector<pair<double,double>> xx;
 vector<pair<double,double>> yy;
 while(c!='*'){
    cin>>c;
    if(c!='*') {cin>>a>>b>>aa>>bb;
    xx.push_back(make_pair(a,aa));
    yy.push_back(make_pair(bb,b));}

 }
 bool kaaba;
 int j=0;
 cin>>x>>y;
 while(x!= 9999.9 && y!= 9999.9){
        j++;
    kaaba=false;
    for(int i=0;i<xx.size();i++){
        if(xx[i].first <x && xx[i].second>x && yy[i].first<y && yy[i].second>y ){
            cout<<"Point "<<j<<" is contained in figure "<< i+1<<endl;
            kaaba=true;
        }

        
    }
    if(!kaaba) cout<<"Point "<<j<<" is not contained in any figure"<<endl;
 cin>>x>>y;
 }


 return 0;
}