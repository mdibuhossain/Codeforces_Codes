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
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    cout << 1 << " " << 1 << endl;
    cout << -a[0] << endl;
    if (n == 1)
    {
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
    }
    else
    {
        cout << 2 << " " << n << endl;
        for (ll i = 1; i < n; i++)
        {
            if (i == 1)
                cout << (n - 1) * a[i];
            else
                cout << " " << (n - 1) * a[i];
        }
        cout << endl;
        cout << 1 << " " << n << endl;
        cout << 0 << " ";
        for (ll i = 1; i < n; i++)
        {
            if (i == 1)
                cout << 0 - ((n - 1) * a[i] + a[i]);
            else
                cout << " " << 0 - ((n - 1) * a[i] + a[i]);
        }
        cout << endl;
    }
    return 0;
}