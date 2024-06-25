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
 
class Day {
    public: 
    int day; 
    int month; 
    int year; 
    int cons; 
    Day(){

    }
    Day(int d,int m,int y,int c){
        day=d;
        month=m;
        year=y;
        cons=c;
    }
    Day next(){
        Day ret=Day(day,month,year,-1);
        string trente1="13578";
        int maxjour;
        if(trente1.find(to_string(month))!=-1 ||month==10 || month==12){
            maxjour=31;

        }else if(month==2){
            if(year%4==0){
                maxjour=29;
            }else{
                maxjour=28;
            }
        }else{
            maxjour=30;
        }
        if(day<maxjour){
            ret.day++;
        }else{
            if(month<12){
                ret.day=1;
                ret.month++;
            }else{
                ret.day=1;
                ret.month=1;
                ret.year++;
            }
        }
        return ret;
    }
    bool equals(Day a){
        return(day==a.day && month==a.month && year==a.year);
    }

};
int main()
{
 fast_cin();
int n,d,y,m,c; 
while(true){
    cin>>n;
    if(!n) break;
    vector<Day> v;
for(int i=0;i<n;i++){
    
    cin>>d>>m>>y>>c;
v.push_back(Day(d,m,y,c)) ;
}
int sum=0,s=0;
for(int i=0;i<n-1;i++){
    if(v[i+1].equals(v[i].next())){
        s++;
        sum+=(v[i+1].cons-v[i].cons);

    }

}
    cout<<s<<" "<<sum<<endl;

}

 return 0;
}