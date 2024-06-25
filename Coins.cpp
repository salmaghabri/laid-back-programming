#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define fo(i,e) for(int i = 0; i < e; i++)
#define rforsn(i,s,e) for(int i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
string w(string s){
   string  res="  ";
    (s[1]!='>')? res[0]=s[0]: res[0]=s[2];
    (s[1]!='>')? res[1]=s[2]: res[1]=s[0];
    return res;
}
int main()
{
 fast_cin();
 string s1,s2,s3,ch1,ch2,ch3,comp="";
cin>>s1>>s2>>s3;
if(s1.find("B")==-1){
    ch1=s2;
    ch2=s3;
    ch3=s1;
}else if(s2.find("B")==-1){
    ch1=s1;
    ch2=s3;
    ch3=s2;

}else{
    ch3=s3;
    ch1=s1;
    ch2=s2;
}
string res1=w(ch1),res2=w(ch2),res3=w(ch3);
int x1=res1.find_first_of('B'),x2=res2.find_first_of('B');

if(x1!=x2){
    if(x1==1) { 
        if(res3[0]==res1[0]) cout<<res1[0]<<res2<<endl;
        else cout<<"Impossible"<<endl;
    }else{
        if(res3[1]==res1[1]) cout<<res2<<res1[1]<<endl;
        else cout<<"Impossible"<<endl;

    }
}else{
    if(x1==0) cout<<'B'<<res3<<endl; 
    else cout<<res3<<'B'<<endl;

}



 return 0;
}