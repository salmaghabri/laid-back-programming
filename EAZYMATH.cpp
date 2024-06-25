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
 int t,n,m,a,d,s;
 cin >> t;
 while (t--)
 {
    cin>>n>>m>>a>>d;
    int checked[m+1];
    memset(checked,0,sizeof(checked));

    for(int i=n;i<=m;i++){
        if(!checked[i]){
            if(i%a==0){
                for(int j=i;j<=m;j+=a){
                    checked[j]++;
                }
            }if (i%(a+d)==0){
                for(int j=i;j<=m;j+=a){
                    checked[j]++;
                }

            }
        }
    }
    
    s=0;
    for(int i=n;i<=m;i++){
        if(!checked[i])
        s++;

    }
    cout<<s<<endl;

  }
 


 return 0;
}