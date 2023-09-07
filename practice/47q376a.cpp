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
#define inputarr(arr,n) for(int i = 0 ; i < n ; i++) cin>>arr[i]
#define printarr(arr,n) for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" "
#define loop(i,n) for(int i = 0 ; i < n ; i++)

// string checkVowel(string s, int pos ){
//     if(s[k] == 'A' || s[k]=='E' || s[k]=='I' || s[k]=='O' || s[k]=='U' || s[k]=='Y'
//          || s[k]=='a' || s[k]=='e' || s[k]=='i' || s[k]=='o' || s[k]=='u' || s[k]=='y'){
//              return "YES";
//          }
//      else return "NO";
// }






void C_R_7(){
  string s; cin>>s;
  int n = s.size();
  size_t index = s.find('^');
  //cout<<index;
  int i = index, j(index+1),k(0),m(1) ;
  int siu1=0, siu2(0);
  while(k < index){
    if(s[k] >= '0' && s[k] <= '9' ){
            siu1+= (s[k]-'0')*i;
            // cout<<i;
    }
    k++;
    i--;
  }
  while(j < n){
    if(s[j] >= '0' && s[j] <= '9'){
        siu2+= (s[j]-'0')*m;

    }
    j++;
    m++;
  }

//   cout<<siu1<<" "<<siu2<<endl;
  if(siu1 > siu2) cout<<"left";
  else if(siu1< siu2) cout<<"right";
  else cout<<"balance";
    
    
}
signed main()
{
  ios;
  int t = 1;
  //cin >> t;
  while (t--)
  {
    C_R_7();
    
  }

  return 0;
}
