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
    string s;
    string res=""; 
    cin>>s; 
     for(int i=s.size()-2; i>=0;i--){
        if(s[i]=='4' && s[i+1]- '0' >= 5){
            s[i]='5'; 
            
        }
    }
    if(s[0]-'0' >= 5 ){
        res="1"; 
        fo(i,s.size()){
            res+="0";
        }
        cout<<res<<ln; 
       
    }else{
    bool tozero=false;
    fo(i,s.size()){
        if(tozero){
            s[i]='0'; 
            continue;
        }
        int j=i;
        if(s[i] -'0' >4 ){
        if(s[i]=='9'){
            while(s[j]=='9') j--;
            int c=(int)s[j] ; 
            s[j]= char(c+1); 
            for(int k=j+1; k<=i; k++){
                s[k]='0';
            }
            tozero=true;
            
        }else
            {int c=(int)s[j-1] ; 
            s[j-1]= char(c+1); 
            s[j]='0'; 
            tozero=true; }

        }
        
    }
    cout<<s<<ln;
    
   
    
    
    }
}

 return 0;
}