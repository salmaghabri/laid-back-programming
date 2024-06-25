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

string s,ss;
cin>>s>>ss;
//while(){
    reverse(s.begin(),s.end());
     reverse(ss.begin(),ss.end());
     ll x,xx,a,ca;
     int m=0;
     string star,asfar="",r="";
     vector<string> v;

     for(int i=0;i<s.size();i++){
        if(i)
        asfar+="0";
        ca=0;
        star="";
        x=s[i]-'0';
        fo(j,ss.size()){
            xx=ss[j]-'0';
            a=x*xx+ca;
            ca=a/10;
            star+=to_string(a%10);
            if(j==ss.size()-1)
                star+=to_string(a%10);
                
 
        }
        
        star=asfar+star;
        dbg(star);
        v.push_back(star);

        
     }
     ca=0;
m=v[v.size()-1].size();
     fo(i,m){
        // a=0;
        // ca=0;
        a=ca;
        fo(j,v.size()){
            if(v[j].size()<i){
                x=0;
            }else{
            x=v[j][i]-'0';}
            a+=x;
            
            
        }
        
            r+=to_string(a%10);
            ca=a/10;

        
        if(i==m-1) 
            r+=to_string(ca);



     }
     reverse(r.begin(),r.end());

cout<<r<<endl; 

 return 0;
}