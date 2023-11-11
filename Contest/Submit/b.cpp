#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1)
    {
      cout << 8 << endl;
      continue;
    }

    string tt = (n >= 3) ? s.substr(n - 3, 3) : s;
    int hh = stoll(tt);

    if (hh % 8 == 0)
    {
      cout << s << endl;
    }
    else
    {
      int gg = hh % 8;
      hh += (10 - gg) % 8;

      string str = (n >= 3) ? s.substr(0, n - 3) : "";
      str += to_string(hh);
      if (n >= 3)
      {
        while (str.size() != n)
          str += '0';
      }

      cout << str << endl;
    }
  }

  return 0;
}