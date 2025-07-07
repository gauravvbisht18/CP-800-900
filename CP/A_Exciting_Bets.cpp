#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << " " << 0 << endl;
        else
        {
            ll g = abs(a - b);

            ll mini = min(b % g, g - (b % g));
            cout << g << " " << mini << endl;
        }

        
    }

    return 0;
}
