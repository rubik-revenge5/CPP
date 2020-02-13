/*
* @Author: sidhhant
* @Date:   2020-02-13
* @Last Modified by:   sidhhant
* @Last Modified time: 2020-02-13
*/

//Sample
#include <bits/stdc++.h>
#define MOD 1000000000
#define MaX 10000005
#define ll long long
#define slld(t) scanf("%I64d",&t)
#define sd(t) scanf("%d",&t)
#define sc(x) scanf("%s",x)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%I64d\n",t)
#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second
#define pb(x) push_back(x)
#define ub upper_bound
#define lb lower_bound
#define all(x) x.begin(),x.end()
#define sz(x) (ll)x.size()
#define clr(x) memset(x,0,sizeof(x))
#define sws ios::sync_with_stdio(false); cin.tie(0)
#define pi acos(-1)
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define repp(I, a, B) for (int I = (a); I <= (B); ++I)
#define t1(x)                cerr<<#x<<": "<<x<<endl
#define t2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define t3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define t4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define t5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define t6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
using namespace std;
ll pwr(ll base, ll p, ll mod = MOD)
{
    ll ans = 1;
    while(p)
    {
        if(p%2==1)   ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        p /= 2;
    }
    return ans;
}
// for inverse modulo : if (1/b)%mod then ans is (b^(mod-2))%mod
ll gcd(ll a, ll b)
{
    if(b == 0)  return a;
    return gcd(b, a%b);
}
ll lcm(ll a, ll b)
{
    return (a*b) / gcd(a, b);
}
/*bool isPrime[MaX];
void sieve(int n) 
{
    for(int i = 0; i <= n;++i) 
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= n; ++i) 
    {
         if(isPrime[i] == true) 
         {
             for(int j = i * i; j <= n ;j += i)
                 isPrime[j] = false;
        }
    }
}*/
bool cmp(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first > b.first);
}
 
const ll N = 5e5 + 5 ;
 
int main()
{
    sws;
    // cin.tie(NULL); 
    //clock_t clk;
    //clk = clock();
    cout<<"asd";
    //clk = clock() - clk;
    //cerr << fixed << setprecision(6) << "Time: " << ((double)clk)/CLOCKS_PER_SEC << "\n";
    
    return 0;
} 

//



#include <bits/stdc++.h>
using namespace std;

int main()
{

}

std::to_string(int ) // convert int to string

ll power(ll x, ll y, ll m) {
 
  if(y == 0)
    return 1LL;
  ll p = power(x, y/2, m) % m;
  //if()
  p = (p*p) % m;
  return (y%2 == 0) ? p : ((x%m)*p) % m;
}


void fastscan(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
 
void fastscan(long long &x)
{
    register long long c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
 
 /* Get the rightmost set bit in set_bit_no */
set_bit_no = x & ~(x-1);

/*last char array element*/'
\0';

//debug
#define DEBUG2(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)

