/*-----------------------WORK HARD THINK HARD-----------------------*/

/*
                Codeforces:-
                Codechef  :-
*/

#include <bits/stdc++.h>

/*----------------------------PBDS----------------------------------*/
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

/*------------------------------TYPES------------------------------*/
#define int long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/*------------------------------FUNCTIONS------------------------------*/
#define forn(i, n) for (i = 0; i < n; i++)
#define forse(i, s, e) for (int i = s; i < e; i++)
#define fores(i, e, s) for (int i = e - 1; i >= s; i--)

#define pb push_back
#define mp make_pair
#define eb emplace_back
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define be(v) v.begin(), v.end()
#define rbe(v) v.rbegin(), v.rend()
#define sz(a) a.size()
#define MOD 1000000007
#define inf 1e18
#define sp(x, y) fixed << setprecision(y) << x

#define mid(s, e) (s + (e - s) / 2)
#define toUpper(x) transform(x.begin(), x.end(), x.begin(), toupper)
#define toLower(x) transform(x.begin(), x.end(), x.begin(), tolower)
/*----------------------------------------------------------------*/
#define ios ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define srand srand(chrono::high_resolution_clock::now().time_since_epoch().count())

/*------------------------------MATH------------------------------*/
#define sqr(n) (n * n)
#define PI 3.1415926535897932384626433832795

/*------------------------------Extras------------------------------*/
#define null NULL
#define endl '\n'
#define imi INT_MIN
#define imx INT_MAX
#define ff first
#define ss second
// -----------------------------------------------------------------------
string checkVowel(string s, int pos)
{
    char c = tolower(s[pos]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
// ------------------------------------------------------------------------
map<long, long> F;
long fib(long n) // to calculate fibonacci in O(logn)
{
    if (F.count(n))
        return F[n];
    long k = n / 2;
    if (n % 2 == 0)
    { // n=2*k
        return F[n] = (fib(k) * fib(k) + fib(k - 1) * fib(k - 1)) % MOD;
    }
    else
    { // n=2*k+1
        return F[n] = (fib(k) * fib(k + 1) + fib(k - 1) * fib(k)) % MOD;
    }
}
//------------------------------------------------------------------------
int joddo(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
// ------------------------------------------------------------------------
vi factors(int n)
{
    vi v;
    while (n % 2 == 0)
    {
        v.pb(2);
        n /= 2;
    }

    for (int i = 3; i < sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            v.pb(i);
            n /= i;
        }
    }

    if (n > 2)
    {
        v.pb(n);
    }

    return v;
}
// ------------------------------------------------------------------------
int power(int x, int y)
{
    int temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y & 1)
        return x * temp * temp;
    else
    {
        return temp * temp;
    }
}
// ------------------------------------------------------------------------

void C_R_7()
{
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
    int siu=0;
    if(n==1) {
        cout<<0<<endl;
        return;
    }
    map<int,int> m;
    for(auto i : a)  m[i]++;
    int mx = 0;
    for(auto i : m ) mx = max(mx,i.second);

    int d = m.size();

    if(d == mx) cout<<d-1<<endl;
    else if(d>mx ) cout<<min(d-1,mx)<<endl;
    else if(d<mx)cout<<min(d,mx-1)<<endl;


    
    

}

signed main()
{
    ios;
    int t = 1;
    cin >> t;
    while (t--)
    {
        C_R_7();
    }

    return 0;
}
