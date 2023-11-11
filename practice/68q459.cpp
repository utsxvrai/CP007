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
#define inputarr(arr, n)        \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define printarr(arr, n)        \
    for (int i = 0; i < n; i++) \
    cout << arr[i] << " "
#define loop(i, n) for (int i = 0; i < n; i++)

void C_R_7()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;
    if (x1 == x2)
    {
        int d = abs(y1 - y2); 
        x3 = x1 + d;
        y3 = y1;
        x4 = x2 + d;
        y4 = y2;
    }
    else if (y1 == y2)
    {
        int d = abs(x1 - x2);
        x3 = x1;
        y3 = y1 + d;
        x4 = x2;
        y4 = y2 + d;
    }
    else
    {
        if (abs(x1 - x2) != abs(y1 - y2))
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
        }
    }
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}
signed main()
{
    ios;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        C_R_7();
    }

    return 0;
}
