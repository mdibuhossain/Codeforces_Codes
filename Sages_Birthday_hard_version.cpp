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
    ll n, cnt = 0;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll x, y, j = 0, i = 0;
    (n & 1) ? y = (n - 1) / 2 : y = (n - 1) / 2 + 1;
    (n & 1) ? x = (n - 1) / 2 - 1 : x = (n - 1) / 2;
    while (y < n || j <= x)
    {
        if (y < n)
            b[i++] = a[y];
        if (j <= x)
            b[i++] = a[j];
        j++;
        y++;
    }
    for (ll i = 1; i < n - 1; i++)
        if (b[i] < b[i - 1] && b[i] < b[i + 1])
            cnt++;
    cout << cnt << endl;
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
            cout << b[i];
        else
            cout << " " << b[i];
    }
    cout << endl;
    return 0;
}