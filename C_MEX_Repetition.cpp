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
    ll n,k; 
    cin>>n>>k;
    int a[n], f[n+1]; 
    memset(f,0,sizeof f);
    fo(i,n){
        cin>>a[i]; 
        if(a[i]<n+1){
            // dbg(a[i]);
            f[a[i]]++;

        }
    }
    priority_queue<int> q;
    fo(i,n+1){
        if(!f[i])
        {q.push(i);
        // dbg(i);
        }
        
    }
    fo(i,n){
        int front=q.top(); 
        q.pop(); 
        if(a[i]<n+1){
            q.push(a[i]);
        }
        a[i]= front; 
        
    }
    k--;
   
    vector<int> mexes; 
    fo(i,n){
        mexes.push_back(a[i]); 
    }
    

    mexes.push_back(q.top()); 
   
   int modk=k%(n+1); 
   int bideya=n-modk+1;

   int res[n+1]; 
    fo(count,n){
        res[count]= mexes[bideya%(n+1)]; 
        
        bideya++;

    }
    fo(i,n){
        cout<<res[i]<<" "; 
    }


cout<<ln;
}

 return 0;
}