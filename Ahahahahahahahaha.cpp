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
void solve1(int one)
{
    if (one % 2 == 0)
    {
        cout << one << endl;
        for (int i = 0; i < one; i++)
        {
            if (i == 0)
                cout << 1;
            else
                cout << " " << 1;
        }
        cout << endl;
    }
    else
    {
        cout << one - 1 << endl;
        for (int i = 0; i < one - 1; i++)
        {
            if (i == 0)
                cout << 1;
            else
                cout << " " << 1;
        }
        cout << endl;
    }
    return;
}
void solve2(int zero)
{
    if (zero % 2 == 0)
    {
        cout << zero << endl;
        for (int i = 0; i < zero; i++)
        {
            if (i == 0)
                cout << 0;
            else
                cout << " " << 0;
        }
        cout << endl;
    }
    else
    {
        cout << zero - 1 << endl;
        for (int i = 0; i < zero - 1; i++)
        {
            if (i == 0)
                cout << 0;
            else
                cout << " " << 0;
        }
        cout << endl;
    }
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, one = 0, zero = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 0)
                zero++;
            else
                one++;
        }
        if (zero == one)
        {
            cout << zero << endl;
            for (int i = 0; i < zero; i++)
            {
                if (i == 0)
                    cout << 0;
                else
                    cout << " " << 0;
            }
            cout << endl;
        }
        else if (one > zero)
            solve1(one);
        else
            solve2(zero);
    }
    return 0;
}