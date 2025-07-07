#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        bool ans = false;

        ll newa = 2 * b - c;
        if (newa / a > 0 && newa % a == 0)
            ans = true;

        ll newb = (a + c) / 2;

        if (newb / b > 0 && newb % b == 0 && (c - a) % 2 == 0)
            ans = true;

        ll newc = 2 * b - a;

        if (newc / c > 0 && newc % c == 0)
            ans = true;

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }

    return 0;
}