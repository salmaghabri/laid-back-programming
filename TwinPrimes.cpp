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

 
 
//  void seive(){
//  vector<int> v;
//  vector<pair<int,int>> twins; 
//     int checked[MAX+1];
//  memset(checked,0,sizeof (checked));
//     checked[0]=1; checked[1]=1;
    
//     for(ll i=2;i*i<=50;i++){
//         if(!checked[i]){
//             for(ll j=i*i;j<=MAX;j+=i){
//                 checked[j]=1;
//             }
//         }
//     }
//     dbg(15);
//     v.push_back(2);
//     for(ll i=3;i<=MAX;i+=2){
//         if(!checked[i]){
//             v.push_back(i);
//             if(v[i]-v[i-1]==2){
//                 twins.push_back(make_pair(v[i-1],v[i]));
//             }
//         }
//     }
//     dbg(v[2]);
    

//  }
    vector<int> twins;

void SieveOfEratosthenes(unsigned long long n)
{
    bool prime[n + 1];
    vector<unsigned long long> v;
    memset(prime, true, sizeof(prime));
 
    for (unsigned long long p = 2; p *p <= n; p++) {
        if (prime[p] == true) {
           
            for (unsigned long long i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    v.push_back(2);
   unsigned long long  j=0;
    for (unsigned long long p = 3; p <= n; p++){
        if (prime[p]){
            j++;
            v.push_back(p);
            
            
                if(v[j]-v[j-1]==2){
                twins.push_back(v[j-1]);
            }
            
            }
                
            
        }

}



int main()
{
 fast_cin();
 //freopen("twin.txt","r",stdin);
 //seive();
 SieveOfEratosthenes(200000);
 int s;
while(cin>>s){
    cout<<"("<<twins[s-1]<<", "<<twins[s-1]+2<<")"<<endl;
}


 return 0;
}