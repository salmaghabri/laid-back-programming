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
 vector<int> primeFactors(int n) 
{ 
    vector<int> factors;
    
    while (n % 2 == 0) 
    { 
        factors.push_back(2);
        n = n/2; 
    } 
 
   
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            factors.push_back(i);
            n = n/i; 
        } 
    } 

    if (n > 2) 
        factors.push_back(n);
    
    return factors;
}

int main()
{
 fast_cin();
 ll t;
 cin >> t;
while(t--){
    // gcd(a,b)<=min(a,b) => best case samllest sum memeber
    // 10/3= 3.33
    // 10=3.33+3.33+3.33
    // 10=3+3+4 2+2+6 4+4+2 (2+2+2+2+2) => (2+2)+(2+2)+(2)
    // 10= 5*2
    // 6+2+2 ou 4 2 2
    // max gcd== multiple men baadhhom
    // 2 x 3 x 2 x 5 x 7 => 6+6+6+...+6 (70 fois)
    // => x=y+y+y+...+(y+y+y)+(y+y) (q fois and q>= k)  maximize y  
    // x= y *q / q>= k 
    // maximize y => minimize q 
    // find smallest q>= k such that x mod q =0
    // print y the answer 
    // 18= 2*3*3 14=7*2 16=2*2*2*2 12=2*2*3 12=4+4+4
    int x,k;
    cin>>x>>k;
    if(k==1){
        cout<<x<<ln;
        continue;
    }
    int q=x;
    int res=1;
    for(int i=1; i*i<=x; i++ ){
        if(x%i==0){

        if(i>=k) res=max(res,x/i); 
        if(x/i >=k) res=max(i, res);
        }
        
        

    }
    cout<<res<<ln;
    
    
}

 return 0;
}