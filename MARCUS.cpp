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

char name[]={'I','E','H','O','V','A','#'};
vector<string> v;

 void solve(string* a, int n, int m, int i, int j,int k){
    if(a[i][j]=='#'){
        return ;
    }
    if(i-1>=0 && a[i-1][j]==name[k]){
        //cout<<"forth"<<" ";
        v.push_back("forth");

        solve(a,n,m,i-1,j,k+1);
    }else if(j-1 >=0 && a[i][j-1]==name[k]){
               // cout<<"left"<<" ";
                v.push_back("left");

        solve(a,n,m,i,j-1,k+1);}
        else if(j+1<m && a[i][j+1]==name[k]){
             //cout<<"right"<<" ";
             v.push_back("right");

        solve(a,n,m,i,j+1,k+1);} 

 }
 

int main()
{
 fast_cin();
 int t,n,m,b,aa,x;
 cin >> t;
 while(t--){
    cin>>n>>m;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        x=a[i].find('@');
        if(x!=-1){
            b=x;
            aa=i;
        }
    }
    
    solve(a,n,m,aa,b,0); 
    for( int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1)
        cout<<' ';
        else{
        cout<<endl;

        }

    }
    v.clear();
 }


 return 0;
}