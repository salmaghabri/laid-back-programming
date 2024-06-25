//9.03
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
 char mat[1001][1001] ;
 int ehseb[1001];
 int m,n,x,y;
 
 int mem [1001][1001][2];

 int solve(int j,int nb,int prev){
    if(j==m) {
      if(nb<x) { return 1e9;}
      
      return 0;}
      int &res = mem[j][nb][prev];
      if(j!=0 && res!=-1) return res;
    res=1e9;
    if(nb<x){

      if(prev==1) res=min( res,n-ehseb[j]+solve(j+1,nb+1,1));
      else if(prev==0) res=min( res,ehseb[j]+solve(j+1,nb+1,0));
      else res= min(n-ehseb[j]+solve(j+1,nb+1,1),ehseb[j]+solve(j+1,nb+1,0));
       
    }else{
    if (nb==y){
      if(prev==1) res=min(res,ehseb[j]+solve(j+1,1,0)) ;
      else res=min(res,n-ehseb[j]+solve(j+1,1,1)) ;
    } else{
      if(prev==1){
        res=min(res,n-ehseb[j]+solve(j+1,nb+1,1));
      res= min(res,ehseb[j]+solve(j+1,1,0));

      }else{
      res= min(res,ehseb[j]+solve(j+1,nb+1,0));
      res=min(res,n-ehseb[j]+solve(j+1,1,1));
      }
    }
    }
    
   return res;
   //  if((nb==y)||(nbB<x  && nbB>0)) {
   //      if(resB!=-1) return resB;
   //      return resB= n-ehseb[j]+solve(j-1,0,nbB+1);//edhen akhel
   //      }
   //  if((nbB==y) || (nbW<x  && nbW >0)) {
   //      if(resW!=-1) return resW;
        
   //      return resW=ehseb[j]+solve(j-1,nbW+1,0);
   //      }
   //   if(resW==-1) 
   //  resW=ehseb[j]+solve(j-1,nbW+1,nbB);
   //   if(resB==-1)  
   //  resB=n-ehseb[j]+solve(j-1,nbW,nbB+1);
   //  return min(resB,resW);

 }



int main()
{
 fast_cin();
 cin>>n>>m>>x>>y;
 memset(ehseb,0,sizeof(ehseb));
 memset(mem,-1,sizeof(mem));
 for(int i=0;i<n;i++){
 for(int j=0;j<m;j++){
    cin>>mat[i][j];
    if(mat[i][j]=='#'){
        ehseb[j]++;
    }
 }
 }


    cout<< solve(0,0,-1);

 return 0;
}