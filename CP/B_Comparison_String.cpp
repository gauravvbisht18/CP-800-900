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
        string s;
        cin >> s;
        ll length = 1;
        ll currlength = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                currlength++;
            else
            {
                length = max(length, currlength);
                currlength = 1;
            }
        }

        length =
            max(length, currlength);

        cout << length + 1 << endl;
    }
    return 0;
}