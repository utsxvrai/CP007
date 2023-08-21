/*-----------------------WORK HARD THINK HARD-----------------------*/

/*
                Codeforces:- utsxvrai
                Codechef  :- cr7bit
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

const int MO = 998244353;

int mod_pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
        {
            result = (1LL * result * base) % MOD;
        }
        base = (1LL * base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

const int N = 1e6 + 5;
int siu[N], mes[N];

int kiki(int v)
{
    if (v == siu[v])
    {
        return v;
    }
    return siu[v] = kiki(siu[v]);
}

void gigi(int x, int y)
{
    x = kiki(x);
    y = kiki(y);
    if (x != y)
    {
        if (mes[x] < mes[y])
        {
            swap(x, y);
        }
        siu[y] = x;
        mes[x] += mes[y];
    }
}

void C_R_7(int n, int m)
{
    vector<vi> hey(n, vi(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> hey[i][j];
    }

    for (int i = 0; i < n * m; i++)
    {
        siu[i] = i;
        mes[i] = 1;
    }
    vector<pair<int, int>> juu{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (hey[i][j] == 0)
            {
                continue;
            }
            for (auto d : juu)
            {
                int x = i + d.first;
                int y = j + d.second;
                if (x >= 0 && x < n && y >= 0 && y < m && hey[x][y] != 0)
                {
                    gigi(i * m + j, x * m + y);
                }
            }
        }
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (hey[i][j] == 0)
            {
                continue;
            }
            mp[kiki(i * m + j)] += hey[i][j];
        }
    }

    int ron = mp.empty() ? 0 : max_element(mp.begin(), mp.end(), [](const pair<int, int> &a, const pair<int, int> &b)
                                           { return a.second < b.second; })
                                   ->second;
    cout << ron << endl;
}

signed main()
{
    ios;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = INT_MAX;
        C_R_7(n, m);
    }

    return 0;
}
