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
//  ll t;
//  cin >> t;
// while(t--){
//     int n,m;
//     cin>>n>>m;
//     string s;
//     cin>>s;
//     map<int,int> mm;
//     int pref[n];
//     int r=0;
//     fo(i,n){
//         r+=(s[i] - '0');
//         pref[i]=r;
//         mm[r]++;

//     }
//     int p,q;
//     while(m--){
//     cin>>p>>q;
//     q--; p--;
//     dbg(pref[q]- pref[p]);
//     dbg(s.substr(p, n-1-q));
//     if(mm[pref[q]- pref[p] ] >0 &&( pref[q] != r && s[q] == '1')){
//         cout<<"YES"<<endl;
//     }else cout<<"NO"<<endl;

//     }

// }

//  return 0;
// }