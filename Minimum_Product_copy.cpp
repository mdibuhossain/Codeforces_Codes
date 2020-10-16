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
        ll a1 = a, b1 = b, x1 = x, y1 = y, n1 = n;
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

        if (a1 > x1)
        {
            ll sub = a1 - x1;
            if (n1 >= sub)
            {
                a1 -= sub;
                n1 -= sub;
            }
            else
            {
                a1 -= n1;
                n1 -= n1;
            }
        }
        if (n1)
        {
            if (b1 > y)
            {
                ll sub1 = b1 - y;
                if (n1 >= sub1)
                {
                    b1 -= sub1;
                    n1 -= sub1;
                }
                else
                {
                    b1 -= n1;
                    n1 -= n1;
                }
            }
        }
        cout << min((a * b), (a1 * b1)) << endl;
    }
    return 0;
}