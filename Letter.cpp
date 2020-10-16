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
    int flag = 1;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s2.size(); i++)
    {
        // flag = 1;
        if (s2[i] == ' ')
            continue;
        else
        {
            for (int j = 0; j < s1.size(); j++)
            {
                if(s1[j] == ' ')
                    continue;
                else if (s2[i] == s1[j])
                {
                    flag = 0;
                    s1.erase(j, 1);
                    break;
                }
                else
                    flag = 1;
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}