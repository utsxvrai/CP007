#include <iostream>
#include <vector>

using namespace std;
const int maxX = 1e6;

int N, x;
vector<int> d(maxX + 1);

void init()
{
    for (int i = 1; i <= maxX; i++)
    {
        for (int j = i; j <= maxX; j += i)
        {
            d[j]++;
        }
    }
}

int main()
{
    cin >> N;

    init();
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        cout << d[x] << endl;
    }

    return 0;
}
