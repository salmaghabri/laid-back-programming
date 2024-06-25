#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define fo(i,e) for(int i = 0; i < e; i++)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main()
{
 fast_cin();
 int n,x,m;
 int fv[100001],fp[100001];
 memset(fv,0,sizeof fv);
    memset(fp,0,sizeof fp);
 vector<pair<int,int>> v;
 cin>>n;
 fo(i,n) {
    cin>>x;
    v.push_back(make_pair(x,i));}
    cin>>m;
    sort(v.begin(),v.end());

    ll vas=0,pet=0,pos;
    pair<int,int>p;
    
    while(m--){
        cin>>x;
        if(fv[x]){
            vas+=fv[x];
            pet+=fp[x];
            continue;
        }
        p=make_pair(x,-100);
        pos=lower_bound(v.begin(),v.end(),p)-v.begin();
        pos=v[pos].second;

        vas+=pos+1;
        pet+=(n-pos);
        fv[x]=pos+1;
        fp[x]=n-pos;

    }
    cout<<vas<<" "<<pet<<endl;


 return 0;
}