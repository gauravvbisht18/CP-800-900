#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();

        ll zero = 0;
        ll one = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }

        ll mini = min(one, zero);

        if (mini % 2 == 1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }

    return 0;
}
