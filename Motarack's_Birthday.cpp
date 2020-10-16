/***********************************************************************\
|      _____   ____    _____               _    _   _____   __  __      |
|     |_   _| |  _ \  |  __ \      /\     | |  | | |_   _| |  \/  |     |
|       | |   | |_) | | |__) |    /  \    | |__| |   | |   | \  / |     |
|       | |   |  _ <  |  _  /    / /\ \   |  __  |   | |   | |\/| |     |
|      _| |_  | |_) | | | \ \   / ____ \  | |  | |  _| |_  | |  | |     |
|     |_____| |____/  |_|  \_\ /_/    \_\ |_|  |_| |_____| |_|  |_|     |
|                                                                       |
|                   COMPUTER SCIENCE AND ENGINEERING                    |
|  Bangabandhu Sheikh Mujibur Rahman Science and Technology University  |
\***********************************************************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, neg_one = 0;
        cin >> n;
        ll a[n], m = 0;
        vector<ll> vt;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
                neg_one++;
        }
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && a[i] == -1 && a[i - 1] != -1)
                vt.push_back(a[i - 1]);
            if (i < n - 1 && a[i] == -1 && a[i + 1] != -1)
                vt.push_back(a[i + 1]);
        }
        sort(vt.begin(), vt.end());
        if (neg_one == n)
            cout << 0 << " " << 1 << endl;
        else
        {
            ll x;
            x = (vt[0] + vt[vt.size() - 1]) / 2;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == -1)
                    a[i] = x;
                if (a[i + 1] == -1)
                    a[i + 1] = x;
                m = max(m, abs(a[i] - a[i + 1]));
            }
            cout << m << " " << x << endl;
        }
    }
    return 0;
}