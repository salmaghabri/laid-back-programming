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
ll fact[11];
    fact[0]=1;
    fact[1]=1;
    for(int i=1; i<=10;i++){
        fact[i]=fact[i-1]*i; 
    }
while(t--){
    ll n; 
    cin>>n; 
    string s=to_string(n); 
    int nn=s.size(); 
    // ll f[10]; 
    // ll m[10]; 
    // fo(i,nn){
    //     f[i]=s[i]-'0'; 
    // }
    // sort(f,f+nn); 
    // reverse(f,f+nn);
    // fo(i,nn){ m[f[i]]=i;
  
    // }
    ll res=0; 
    for(int i=0; i<nn;i++)
    for(char c= s[i]+1; c<='9';c++){
       if(s.find_first_of(c,i+1) != -1){
        res+= fact[nn-i-1]; 
       }
   
    }
    // dbg(res);
    // dbg(fact[nn]);
    double dd=0,cc=1; 
    fo(i,res){
        cc*=(double)1/fact[nn];
        if(cc < 1e-11 ) break;
        dd+=cc;
    }
    // ll res=0,ff=0; 
    // fo(i,nn){
    //     int num=s[i]-'0'; 
    //     // int x=nn-f[i]-1;
    //     dbg(num); 
    //     dbg(m[num]); 
    //     if(m[num]==i) ff++;
    //     if(m[num] > i )
    //     res+=(m[num]-i)*fact[nn-i-1];
    //     dbg(res);

    // }
    // double d=(double)res/fact[nn]; 
    printf("%.9f\n", dd); 
    // cout<<dd<<endl; 

}

 return 0;
}