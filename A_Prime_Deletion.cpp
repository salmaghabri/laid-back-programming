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
    ll n;
    string s; 
    cin>>s; 
    string res=""; 
    char a[]={'1','3','7','9'};
    bool po=false;
    for(char i='1';i<='9';i++){
        int pos=s.find_first_of(i); 
        for(int j=0; j<4;j++){
            int x=s.find_first_of(a[j],pos+1); 
            if(x==-1) continue;
            string ss="";
            ss+=i;
            ss+=a[j];
           

            int k=stoi(ss);
            if(k%3 && k%7 && k%9 && a[j]!=i){
                res=ss; 
                po=true;
                break ;

            }
            


        }
        if(po) break;

    }
    if(po)
    cout<<res<<ln;
    else cout<<-1<<ln;


}

 return 0;
}