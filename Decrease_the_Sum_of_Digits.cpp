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
ll solve(ll n2, ll s)
{
    ll sum = 0;
    while (n2)
    {
        sum += n2 % 10;
        n2 /= 10;
    }
    if (sum <= s)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s, len = 0, sum = 0, mv = 0;
        cin >> n >> s;
        ll n1 = n, n2 = n;
        while (n1)
        {
            sum += n1 % 10;
            len++;
            n1 /= 10;
        }
        if (sum <= s)
            cout << 0 << endl;
        else
        {
            ll p = 1;
            for (int i = 0; i < len; i++)
            {
                // ll p = pow(10, i);
                ll last_D = (n2 / p) % 10;
                ll y = p * ((10 - last_D) % 10);
                n2 += y;
                mv += y;
                if (solve(n2, s))
                    break;
                p *= 10;
            }
            cout << mv << endl;
        }
    }
    return 0;
}