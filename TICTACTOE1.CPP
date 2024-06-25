#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define fo(i,e) for(ll i = 0; i < e; i++)
#define foi(i,e) for(int i = 0; i < e; i++)
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
 char grid[3][3];
while(t--){
    int x=0,o=0;
    foi(i,3){
        foi(j,3){
            cin>>grid[i][j];
            
            if(grid[i][j]=='X') x++;
            else if(grid[i][j]=='O') o++;
        }
    }
    if(o>x || x-o>1) {
        cout<<"no"<<endl; 
        continue;
    }
    bool a=false,b=false,c;
    char aa,bb;
    foi(i,3){
        if(grid[0][i]==grid[1][i] && grid[0][i]==grid[2][i] && grid[0][i]!='.'){
    
            
            aa=grid[0][i];
            (aa=='X')? a=true: b=true;

            
        }if(grid[i][0]==grid[i][1] && grid[i][0]==grid[i][2] && grid[i][0]!='.' ){
            aa=grid[i][0];
            (aa=='X')? a=true: b=true;
            
        }
    }
    if(grid[0][0]==grid[1][1]&&grid[0][0]==grid[2][2]&& grid[0][0]!='.' ){
            aa=grid[0][0];
            (aa=='X')? a=true: b=true;
            

        }
        if(a && b){
            cout<<"no"<<endl; 
            continue;

        }
        if(a){
            (x-o==1)? cout<<"yes"<<endl: cout<<"no"<<endl; continue;
        }else if(b){
            (x==o)? cout<<"yes"<<endl: cout<<"no"<<endl; continue;
        }
        cout<<"yes"<<endl;
    
}

 return 0;
}