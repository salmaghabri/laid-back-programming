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

int visited[200006]; 

 void dfs(int i,vector<vector<int>>& adj,vector<ll> & ch){
    if(visited[i] ) return ; 
   
    visited[i]=1; 
    bool feuille=true;
    for( int n: adj[i]){
        if(!visited[n])
       { 
        dfs(n, adj,ch); 
        if(ch[n] !=0)
        ch[i]+=ch[n];
        feuille=false;  
}
    }
    if(feuille) 
    ch[i]=1;
     

 }

int main()
{
 fast_cin();
 ll t;
 cin >> t;
while(t--){
    ll n,qq; 
    cin>>n; 
    vector<vector<int>> adj(n); 
    memset(visited, 0,sizeof visited);
    fo(i,n-1){
        int x, y; 
        cin>> x>>y; 
        x--;
        y--; 
        adj[x].push_back(y); 
        adj[y].push_back(x);

    } 
    vector<ll> exit(n); 
    dfs(0,adj,exit);
//     vector<int> level(n); 
//    queue<pair<int,int>> q; 
//    q.push({0,1}); 
//    ll nfeuille=0; 
//    ll maxl=1; 
//    while(!q.empty()){
//     pair<int,int> front=q.front(); 
//     level[front.first]= front.second; 
//     visited[front.first]=1; 
//     bool feuille=true; 
//     for(int child: adj[front.first]){
//         if(!visited[child]){
//             q.push({child, front.second+1}); 
//             feuille=false; 
//         }

//     }
//     if(feuille){
//         nfeuille++; 
//         maxl=front.second;
//     }

// q.pop();
//    }
   
   
//    fo(i,n) dbg(exit[i]);
    
    cin>>qq;
    while(qq--){
        int x,y; 
        cin>>x>>y; 
        x--; 
        y--; 
        ll res=exit[x]*exit[y]; 
        cout<<res<<ln;
       

    }
}

 return 0;
}