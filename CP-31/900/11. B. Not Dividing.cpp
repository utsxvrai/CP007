/*-----------------------WORK HARD THINK HARD-----------------------*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define Bolt            ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define srand           srand(chrono::high_resolution_clock::now().time_since_epoch().count())
#define int             long long
#define pii             pair<int, int>
#define mii             unordered_map<int, int>
#define mci             unordered_map<char, int>
#define vi              vector<int>
#define vs              vector<string>
#define vc              vector<char>
#define taken           int n; cin>>n;
#define scan(v)         for(auto &i : v)cin>>i;
#define pb              push_back
#define setBits(x)      __builtin_popcountll(x)
#define zeroBits(x)     __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define sp(x, y)        fixed << setprecision(y) << x
#define pi              3.1415926535897932384626433832795
#define null            NULL
#define endl            '\n'

// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first  >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " "<< p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " " ; return ostream; }
map<long, long> F; long fib(long n) {  if (F.count(n)) return F[n]; long k =n/2; if(n%2==0){return F[n]=(fib(k)*fib(k)+fib(k-1)*fib(k-1)) %mod;} else{return F[n] = (fib(k) * fib(k + 1) + fib(k - 1) * fib(k)) % mod;}} // fibonacci log(n)  fib(n)
int sfd(int n) { int sum = 0; while (n) { sum += n % 10; n /= 10; } return sum; } // sum of digits sfd(n)
vi factors(int n) { vi v; while (n % 2 == 0) { v.pb(2); n /= 2; } for (int i = 3; i < sqrt(n); i += 2) { while (n % i == 0) { v.pb(i); n /= i; } } if (n > 2) v.pb(n); return v; } // vector of prime factors   factors(n)
unsigned int power(int x, int y, int p) { unsigned int s=1; x=x%p; while(y>0) { if(y&1) s=(s*x)%p; y=y>>1; x=(x*x)%p; } return s%p; } //power(a,b,c)log(n) 
bool isPrime(int n) { if (n <= 1) return false; if(n<=3) return true; if(n%2==0||n%3==0) return false; for(int i=5;i*i<=n;i+=6) { if(n%i==0||n%(i+2)==0) return false; } return true; } // isPrime
vi prePrime(int n) { vi v(n,true);; for (int i = 2; i*i <=n ; ++i) { for (int j = i*i; j <=n ; j+=i) { v[j] = false; } } return v; } // vector of prime numbers less than n  prePrime(n
int modInverse(unsigned int n, int p) { return power(n, p-2, p); }  // modInverse(n,p) log(n)  
int ncr(int n, int r, int p) { if(n<0 || r>n) return 0; else if(r==0 || r==n) return 1; int fac[n+1]; fac[0]=1; for(int i=1; i<=n; i++) fac[i] = (fac[i-1]*i)%p; return (fac[n]*modInverse(fac[r],p)%p*modInverse(fac[n-r],p)%p)%p; } // ncr(n,r,p) log(n)
int factorial(int n, int p) { int cnt=1; for(int i=1; i<=n; i++) { cnt*=i; cnt%=p; } return cnt%mod; }  // factorial(n,p) log(n)
int isPalindrome(string s) { for(int i=0; i<(int)s.size(); i++) { if(s[i]!=s[s.size()-i-1]) return 0; } return 1; } // isPalindrome(s) log(n)
int lcm(int a, int b) { return (a/__gcd(a,b))*b; } // lcm(a,b) log(n)
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(int x){if (x >= 0) {int sr = sqrt(x);return (sr * sr == x);}return false;}














void C_R_7()
{
    int n; cin>>n;
    vi v(n); cin>>v;
    for(int i = 0 ; i < n ; i++){
        if(v[i]==1){
            v[i]+=1;
        }
    }
    int prev = v[0];
    for(int i = 1 ; i < n ; i++){

        if(v[i] < v[i-1]){
            v[i] = v[i];
        }
        if(v[i]%v[i-1] == 0 && (v[i-1]+1)%prev !=0 && v[i]!=1){
            v[i]+=1;
        }
        if(v[i]==1){
            v[i] = v[i-1]+1;
        }
    
            prev = v[i];
    }
    cout<<v<<endl;
}

//----Coding bahut ho gya ab samay aya hai gf banane ka-----












signed main()
{
     //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    Bolt;
    int t = 1;
    cin >> t;
    while (t--)
    {
        C_R_7();
    }

    return 0;
}


/*
     ####    #####    ######   #####    ######   ######  
    ##  ##   ##  ##       ##   ##  ##     ##       ##    
    ##       ##  ##      ##    #####      ##       ##    
    ##       #####      ##     ##  ##     ##       ##    
    ##  ##   ## ##     ##      ##  ##     ##       ##    
     ####    ##  ##    ##      #####    ######     ##  
*/