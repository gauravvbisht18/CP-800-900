#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mini(string n, string pos)
{
    int op = 0;
    int check = pos.size() - 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] == pos[check])
        {
            check--;
            if (check < 0)
                break;
        }
        else
            op++;
    }
    if(check >= 0) op = INT_MAX;

    return op;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        vector<string> pos = {"00", "25", "50", "75"};

        int ans = INT_MAX;

        for (auto it : pos)
        {
            ans = min(ans, mini(n, it));
        }

        cout << ans << endl;
    }
    return 0;
}
