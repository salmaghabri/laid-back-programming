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
    cin>>n;
    n--;
    ll a[n]; 
    int f[n+2]; 
    memset(f,0,sizeof f); 
    fo(i,n){
        cin>>a[i];
    }
    if(a[n-1] > (n+1)*(n+2)/2) {
        cout<<"NO"<<ln; 
        continue;
    }
    // if(a[n-1]+n+1 != (n+1)*(n+2)/2) {
    //     dbg(a[n-1]);
    //     cout<<"no4"<<ln; 
    //     continue;
    // }
    ll saut=-1; 
    for(ll i=0; i<n-1;i++){
        int diff=a[i+1]-a[i]; 
        dbg(diff);
        if(diff>n || f[diff] ){
        saut=diff;  
        
        }else{
        f[diff]++; 
        }

    }
    if(saut==-1 ){
        if(a[n-1]+n+1 ==  (n+1)*(n+2)/2){
            cout<<"YES"<<ln;
            continue;
        }
        saut=a[0];
    }else{
        f[a[0]]++; 
    }
    int ne9sin=0, n1,n2;
    for(int i=1; i<=n+1;i++){
        if(f[i]==0){
            cout<<i<<ln;
            ne9sin++; 
            if(ne9sin==1){
                n1=i;
            }else if(ne9sin ==2){
                n2=i;
            }else{
                break; 
            }

        }


    }
    dbg(n1);
    dbg(n2);
    dbg(ne9sin);

if(ne9sin==2 && n1+n2==saut) {
    cout<<"yes"<<endl; 
}else{
    cout<<"no"<<endl; 
}
cout<<"-------------------"<<ln;

}

 return 0;
}