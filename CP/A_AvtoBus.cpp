#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n % 2 == 1 || n < 4)
            cout << -1 << '\n';
        else
        {
            ll mini = (n + 5) / 6;
            ll maxi = n / 4;
            cout << mini << " " << maxi << '\n';
        }
    }
    return 0;
}