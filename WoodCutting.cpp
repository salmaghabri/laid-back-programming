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
 int h[100001];
 pair<int,int> x[100001];
 int mem[100001][3];

 int solve(int i, int n){
    if(i==n-1) return 0; 
    bool v=(i>=0 &&  i<n), l=x[i].first-h[i]>x[i-1].second, r=x[i].first+h[i]<x[i+1].first;
    
    if(!l && !r) {
        if(mem[i][2]!=-1) return mem[i][2];

        return mem[i][2]=solve(i+1,n);}
    int c1=-1,c2=-1;
    if(l && v){
        if(mem[i][0]!=-1){

            c1=mem[i][0];
        }else{
            x[i].first-=h[i];
        mem[i][0]=1+solve(i+1,n);
        c1=mem[i][0];
        }
        

    }
    if(r && v){
        
        if(mem[i][1]!=-1){
            c2=mem[i][1];
        }else{
            x[i].second+=h[i];
        mem[i][1]=1+solve(i+1,n);
        c2=mem[i][1];
        }

    }
    return max(c1,c2);
 }


int main()
{
 fast_cin();
 int n;
 cin>>n;
 if(n<=2){
    cout<<n<<endl; 
    return 0;
 } // cas particulier n>=2 returni n
 int l;
 for(int i=0;i<n;i++){
    cin>>l>>h[i];
    x[i]=make_pair(l,l);

 }
 x[0].first-=h[0];
 x[n-1].second+=h[n-1];
  memset(mem,-1,sizeof(mem));

 cout<<2+solve(1,n);


 return 0;
}