// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
// #include <bits/stdc++.h> 
 
// using namespace std;
 
// typedef long long ll;
// ll MOD = 998244353;
// double eps = 1e-12;
// #define fo(i,e) for(ll i = 0; i < e; i++)
// #define rforsn(i,s,e) for(ll i = s; i >= e; i--)
// #define ln "\n"
// #define dbg(x) cout<<#x<<" = "<<x<<ln
// #define INF 2e18
// #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

// int main()
// {
//  fast_cin();
// //  ll t;
// //  cin >> t;
// int n;
// cin>>n;
// int a[n];
// fo(i,n) cin>>a[i];
// int l=0,r=0,maxi=0,vis[n];
// bool pos=true;
// vector<pair<int,int>> res;
// memset(vis, 0, sizeof vis);
// vis[0]=1;
// while(r<n && l<n){
//     int chkoun=a[l];
//     while(chkoun && r<n){
//         if(vis[r]) continue;
//         res.push_back({l,r});
//         vis[r]=1;
//         r++;
//         // maxi=max(maxi, a)
//         chkoun--;

//     }
//     l++;


// }
// for(int i: vis){
//     if(! i){ pos=false;
//     break;
//     }
//     cout<<i<<endl;
// }
// // if(!pos) cout<<-1<<endl;
// // else{
// cout<<res.size()<<endl;
// // for(auto i: res){
// //     cout<<i.first<<" "<<i.second<<endl;
// // }

// // }

//  return 0;
// }