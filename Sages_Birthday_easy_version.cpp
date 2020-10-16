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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1 || n == 2)
    {
        cout << 0 << endl;
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
                cout << a[i];
            else
                cout << " " << a[i];
        }
        cout << endl;
    }
    else
    {
        sort(a, a + n);
        ll len = n - 2, cn = 0;
        for (ll i = 0, j = 1; i < len; j++)
        {
            if (j & 1)
                b[j] = a[i];
            else
                b[j] = a[len - 1 - i++];
        }
        b[0] = a[n - 2];
        b[n - 1] = a[n - 1];
        for (ll i = 1; i < n - 1; i++)
            if (b[i] < b[i + 1] && b[i] < b[i - 1])
                cn++;
        cout << cn << endl;
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
                cout << b[i];
            else
                cout << " " << b[i];
        }
        cout << endl;
    }
    return 0;
}