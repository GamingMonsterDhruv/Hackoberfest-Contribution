
//This code is used by me for competetive coding and is time saving and we can call important mathematical functions easily
#include<bits/stdc++.h>
#define I int
#define ll long long 
#define ull unsigned long long 
#define S string 
#define V(i) vector<i> 
#define M(i,j) map<i,j>
#define P(i,j) pair<i,j>
#define li long 
#define ui unsigned int
#define D double
#define ld long double
#define F float
#define C char
#define L size()
#define B bool
#define ff first
#define ss second
#define Q(n) queue <n>
#define ST(n) stack <n>
#define R return
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define ppf pop_front()
#define ppb pop_back()
#define mp(n,m) make_pair(n,m)
#define ts(n) to_string(n)
#define loop(var1,start,end) for(var1=start;var1<end;var1++)
#define lop(var1,start,end,it) for(var1=start;var1<end;var1+=it)
#define rloop(var2,start,end) for(var2=start;var2>=end;var2--)
#define odd(n) (n&1)
#define all(x) (x).begin(),(x).end()
#define nl "\n"
#define Mod 1000000007
#define mod 998244353
#define PI 3.141592653589793238462
using namespace std;
//Function To fill the Values in vector.
void input(V(ll) &vec,ll n){
    ll temp,i;
    loop(i,0,n){
        cin>>temp;
        vec.pb(temp);
    }
}
//Calculate Factorial of no.
ll fact(ll n){
    ll ans=1;
    while(n--){
        ans*=(n+1);
        ans%=mod;
    }
    R ans;
}
//Check whether the no. is prime or not.
B isprime(ll n){
    ll i;
    if(n<=1) R false;
    if(n==2) R true;
    if(!odd(n)) R false;
    for(i=3;i*i<=n;i+=2)
        if(n%i==0) R false;
    R true;
}
//Overload Comparator Function.
B cmp(ll u,ll v){
    R u>v;
}
//Function to convert binary to decimal.
ll decimal(S s){
    reverse(s.begin(),s.end());
    ll ans=0,i=1,j=0;
    while(j<s.L){
        if(s[j]=='1'){
            ans+=i;
        }
        i*=2;
        j++;
    }
    R ans;
}
//Function to Conert Decimal no. to binary no.
S binary(ll n){
    S temp;
    if(n==0) R "0";
    while(n){
        temp+=ts(n%2);
        n/=2;
    }
    // reverse(temp.begin(),temp.end());
    R temp;
}
//Execution of function to count no. of digits.
ll countdigits(ll n){
    ll i,ans=0;
    i=n;
    while(i){
        ans++;
        i/=10;
    }
    R ans;
}
//Function to find n^k
ll power(ll x,ll y)
{
    if (y == 0)
        R 1;
    ll p=power(x,y/2);
    if (y % 2 == 0)
        R (p%Mod * p)%Mod;
    else
        R (x * p%Mod * p)%Mod;
}
//Function to calculate modulo inversion.
ll modulo_inverse(ll n){  
    R power(n,Mod-2);
}
//Function to calculate factorial.
ll factorial(ll n){
    V(ll) fact(n+1);
    fact[0]=1;
    ll i;
    loop(i,1,n+1){
        fact[i]=(fact[i-1]*i)%Mod;
    }
    R fact[n];
}
//Function to calculate combination.
ll nCr(ll n,ll r){
    if (r==0 || n==0) return 1;
    ll fac[n+1];
    fac[0]=1;
    ll i;
    loop(i,1,n+1)
        fac[i]=(fac[i-1]*i)%Mod;
    R (fac[n]*modulo_inverse(fac[r])%Mod*modulo_inverse(fac[n-r])%Mod)%Mod;