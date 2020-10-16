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
        getchar();
        int x, flag = 0;
        string st;
        cin >> st;
        cin >> x;
        int n = st.size();
        string a = string(n, '1');
        // Constructing
        for (int i = 0; i < n; i++)
        {
            if (st[i] == '0')
            {
                if ((i + x) < n)
                    a[i + x] = '0';
                if ((i-x) >= 0)
                    a[i - x] = '0';
            }
        }
        // Checking
        string res = a;
        for (int i = 0; i < n; i++)
        {
            if((i+x) < n && a[i+x] == '1' || (i-x) >= 0 && a[i-x] == '1')
                res[i] = '1';
            else
                res[i] = '0';
        }
        if (res == st)
            cout << a << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}