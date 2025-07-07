#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        ll finalpos;

        if (x % 4 == 1)
            finalpos = -x;
        else if (x % 4 == 2)
            finalpos = 1;
        else if (x % 4 == 3)
            finalpos = x + 1;
        else if (x % 4 == 0)
            finalpos = 0;

        if (n % 2 == 0)
            finalpos = n + finalpos;
        else
            finalpos = n - finalpos;

        cout << finalpos << endl;
    }

    return 0;
}