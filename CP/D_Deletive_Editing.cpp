#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll test;
    cin >> test;

    while (test--)
    {
        string s, t;
        cin >> s >> t;

        int n = s.size();
        int m = t.size();

        vector<int> freq(26, 0);
        for (int i = 0; i < m; i++) 
            freq[t[i] - 'A']++;

        for (int i = n - 1; i >= 0; i--)
        {
            if (freq[s[i] - 'A'] > 0)
                freq[s[i] - 'A']--;
            else
                s[i] = '.';
        }

        string fin = "";

        for (int i = 0; i < n; i++)
        {
            if (s[i] != '.')
                fin += s[i];
        }

        if (fin == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
