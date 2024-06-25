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
 
bool com(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!= b.first) return  a.first>b.first;
    
    if(a.first == b.first) return (a.second<b.second); 
}
int main()
{ /* l vector zyed ya jemaaaaa  */
 fast_cin();
 int k;
 string s,ss; 
 cin >> s>>k;
 vector<pair<int,int>> v; 
 
 fo(i,s.size()){
    if(s[i]=='0') continue;
    v.push_back({s[i]-'0',i});

 }
 sort(v.begin(),v.end(),com); 
 

 
 int y;

 fo(i,v.size()){
    y=s.find(to_string(v[i].first));
    if(y <=k){
        
        
        ss+=to_string(v[i].first);
        s.erase(s.begin()+y);
       
        
        k-=(y);
        dbg(k);
        dbg(s);
        
        
        
        

    }
    
    

 }
 string m,l;
   
  dbg(k);
    if(k){
        
        int x=s.find_first_not_of('0');
        if(x==0) x=s.find_first_not_of('0',s.size()+1);
        if(x!=-1){
            
        m=s.substr(0,x-k);
        m+=s[x];
        dbg(m);
        s.erase(s.begin()+x);
        l=s.substr(x-k);
        
        
        
        
        
        s=l;
        ss+=m;
        }

    }


cout<<ss+s<<ln;
 return 0;
}