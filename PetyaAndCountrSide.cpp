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
 int n;
bool valid(int j){
    return(j>=0 && j<n);

}
int main()
{
 fast_cin();
 
 cin >> n;
int a[n];

//1 2 3 6 6 7 5 5 6 4 8 9 5 2 2
fo(i,n) {
    cin>>a[i];

} 
 if(n<=2) {cout<<n;
 return 0;}
int s=0,i=0,m=0,kifkif=0;



while(i<n-1){
     s=kifkif;
     kifkif=0;
    while(a[i]<=a[i+1] && i<n-1){
        s++;
        i++;
        
    }
    while(a[i]>=a[i+1]&& i<n-1){
        s++;
        i++;
        if(a[i]==a[i+1]) kifkif++;
        
    }

    
    m=max(m,s+1);
   
    
}
cout<<m<<endl;
 return 0;
}