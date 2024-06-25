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
 

int main()
{
 fast_cin();
 int n; 
 cin>>n;
 int a[n];
 fo(i,n) cin>>a[i];
 bool down=false; 
 int l=0,r=0,swi=0; 
 
 for(int i=0;i<n-1;i++){
    if((down)){
         
        if(a[i]<a[i+1]){
            down=false; 
            swi++;
            r=i;
            if(swi>1){
                
                cout<<"no"<<endl;
                return 0; 
            }
        }
    }else{
        if(a[i]>a[i+1]){
            down=true; 
            l=i;
        }

    }

 }
 if(down){
    if(swi==1){ cout<<"no"; return 0;}
    r=n-1;

 }

 
 
 if((l-1>=0  && a[r]<a[l-1])||(r+1<n &&a[l]>a[r+1])) cout<<"no";
 else  cout<<"yes"<<endl<<l+1<<" "<<r+1; 


 return 0;
}