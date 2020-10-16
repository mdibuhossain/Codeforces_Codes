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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        if (y <= x)
        {
            if (b > y)
            {
                ll sub = b - y;
                if (n >= sub)
                {
                    b -= sub;
                    n -= sub;
                }
                else
                {
                    b -= n;
                    n -= n;
                }
            }
            if (n)
            {
                if (a > x)
                {
                    ll sub1 = a - x;
                    if (n >= sub1)
                    {
                        a -= sub1;
                        n -= sub1;
                    }
                    else
                    {
                        a -= n;
                        n -= n;
                    }
                }
            }
        }
        else
        {
            if (a > x)
            {
                ll sub = a - x;
                if (n >= sub)
                {
                    a -= sub;
                    n -= sub;
                }
                else
                {
                    a -= n;
                    n -= n;
                }
            }
            if (n)
            {
                if (b > y)
                {
                    ll sub1 = b - y;
                    if (n >= sub1)
                    {
                        b -= sub1;
                        n -= sub1;
                    }
                    else
                    {
                        b -= n;
                        n -= n;
                    }
                }
            }
        }
        cout << (a * b) << endl;
    }
    return 0;
}