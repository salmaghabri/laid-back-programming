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
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int a1=a.find_first_of('1');
    set<int> sa;
    set<int> sb;
    int f[n+1];
    memset(f,0,sizeof f);
    int as=0,bs=0;
    while(a1!=-1){
        if( a[a1-1]=='0'){
        as++; 
        f[a1]++; 
        // dbg(a1);

        }
        a1=a.find_first_of('1', a1+1);



    }
    int b1=b.find_first_of('1');
bool po=false; 
    while(b1!=-1){
        if(b[b1-1]=='0'){
        if(f[b1]){
            po=true; 
            break;
        }
        // dbg(b1);

        }
        b1=b.find_first_of('1', b1+1);



    }
    
    // if(sa.size()+sb.size()< bs+as){
    //     cout<<"YES"<<ln;
    // }else cout<<"NO"<<ln;
    // for(int i=0; i<a.size(); i++){
    //     int j=i+2; 
    //     for(int j=i+2; j<n;j++){
    //         if(a[i]==a[j] && b[i]==b[j] && b[i]==a[j]){
    //             for(int k=i;k<=j;k++){
    //                 a[k]=a[j];
    //                 b[k]=a[j];
    //             }
    //             continue;
    //         }

    //     }
       

    // }
    if(po) cout<<"YES"<<ln; 
    else cout<<"NO"<<ln;
}

 return 0;
}