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
        vector<ll> v1;
        vector<ll> v2;
        vector<ll> res;
        ll x1, y1, z1, x2, y2, z2, sum = 0;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

        for (int i = 0; i < z1; i++)
            v1.push_back(2);
        for (int i = 0; i < x1; i++)
            v1.push_back(0);
        for (int i = 0; i < y1; i++)
            v1.push_back(1);

        for (int i = 0; i < y2; i++)
            v2.push_back(1);
        for (int i = 0; i < z2; i++)
            v2.push_back(2);
        for (int i = 0; i < x2; i++)
            v2.push_back(0);

        // for (int i = 0; i < v1.size(); i++)
        //     cout << v1[i] << " ";
        // cout << endl;
        // for (int i = 0; i < v2.size(); i++)
        //     cout << v2[i] << " ";
        // cout << endl;

        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] == v2[i])
                res.push_back(0);
            else if (v1[i] > v2[i])
                res.push_back(v1[i] * v2[i]);
            else
                res.push_back(-(v1[i] * v2[i]));
            sum += res[i];
            // cout << res[i] << " ";
        }
        cout << sum << endl;
    }
    return 0;
}