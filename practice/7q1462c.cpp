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
//#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/*------------------------------FUNCTIONS------------------------------*/


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
#define inputarr(arr,n) for(int i = 0 ; i < n ; i++) cin>>arr[i]
#define printarr(arr,n) for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" "
#define loop(i,n) for(int i = 0 ; i < n ; i++)

void C_R_7()
{
    int n; cin>>n;
    if(n>45) cout<<"-1"<<endl;
    int d=0, f=9;
    vll ans;
    while(n!=0){
        if(n>=f){
            ans.pb(f);
            n-=f;
        }
        f--;

    }
    loop(i,n) cout<<ans[i];
    cout<<endl;
  
     
    
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
