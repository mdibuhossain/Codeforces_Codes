/*
 ██▓ ▄▄▄▄    ██▀███   ▄▄▄       ██░ ██  ██▓ ███▄ ▄███▓
▓██▒▓█████▄ ▓██ ▒ ██▒▒████▄    ▓██░ ██▒▓██▒▓██▒▀█▀ ██▒
▒██▒▒██▒ ▄██▓██ ░▄█ ▒▒██  ▀█▄  ▒██▀▀██░▒██▒▓██    ▓██░
░██░▒██░█▀  ▒██▀▀█▄  ░██▄▄▄▄██ ░▓█ ░██ ░██░▒██    ▒██ 
░██░░▓█  ▀█▓░██▓ ▒██▒ ▓█   ▓██▒░▓█▒░██▓░██░▒██▒   ░██▒
░▓  ░▒▓███▀▒░ ▒▓ ░▒▓░ ▒▒   ▓▒█░ ▒ ░░▒░▒░▓  ░ ▒░   ░  ░
 ▒ ░▒░▒   ░   ░▒ ░ ▒░  ▒   ▒▒ ░ ▒ ░▒░ ░ ▒ ░░  ░      ░
 ▒ ░ ░    ░   ░░   ░   ░   ▒    ░  ░░ ░ ▒ ░░      ░   
 ░   ░         ░           ░  ░ ░  ░  ░ ░         ░   
          ░                                           
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, neg = 0, res = 1;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
                neg++;
        }
        if (neg == n)
        {
            sort(a, a + n, greater<ll>());
            for (ll i = 0; i < 5; i++)
                res *= a[i];
        }
        else
        {
            sort(a, a + n, [](ll i, ll j) { return abs(i) > abs(j); });
            // for (ll i = 0; i < 4; i++)
            //     res *= a[i];
            // if (res > 0)
            // {
            //     for (ll i = 4; i < n; i++)
            //         if (a[i] > 0)
            //         {
            //             res *= a[i];
            //             break;
            //         }
            // }
            // else
            // {
            //     for (ll i = 4; i < n; i++)
            //         if (a[i] < 0)
            //         {
            //             res *= a[i];
            //             break;
            //         }
            // }
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        // cout << res << endl;
    }
    return 0;
}