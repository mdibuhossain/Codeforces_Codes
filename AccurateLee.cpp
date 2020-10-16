/***********************************************************************\
|      _____   ____    _____               _    _   _____   __  __      |
|     |_   _| |  _ \  |  __ \      /\     | |  | | |_   _| |  \/  |     |
|       | |   | |_) | | |__) |    /  \    | |__| |   | |   | \  / |     |
|       | |   |  _ <  |  _  /    / /\ \   |  __  |   | |   | |\/| |     |
|      _| |_  | |_) | | | \ \   / ____ \  | |  | |  _| |_  | |  | |     |
|     |_____| |____/  |_|  \_\ /_/    \_\ |_|  |_| |_____| |_|  |_|     |
|                                                                       |
|                   COMPUTER SCIENCE AND ENGINEERING                    |
|  Bangabandhu Sheikh Mujibur Rahman Science and Technology University  |
\***********************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        string s, mod_s;
        cin >> n;
        cin >> s;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] < s[i - 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << s << endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                break;
            mod_s.push_back('0');
        }
        mod_s.push_back('0');
        for (int i = (s.size() - 1); i >= 0; i--)
        {
            if (s[i] == '0')
                break;
            mod_s.push_back('1');
        }
        cout << mod_s << endl;
    }
    return 0;
}