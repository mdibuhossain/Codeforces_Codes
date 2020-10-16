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
int main()
{
    int flag_1 = 0, flag_2 = 0, flag_3 = 0;
    string sen;
    getline(cin, sen);
    // transform(sen.begin(), sen.end(), sen.begin(), ::toupper);
    for (int i = 0; i < sen.size(); i++)
    {
        if (sen[0] >= 'a' && sen[0] <= 'z')
        {
            flag_1 = 1;
        }
        if (sen[i] >= 'A' && sen[i] <= 'Z')
        {
            flag_2++;
        }
        else
        {
            flag_3++;
        }
    }
    // cout << flag_2 << endl;
    // cout << sen.size() << endl;
    if (flag_2 == sen.size())
    {
        transform(sen.begin(), sen.end(), sen.begin(), ::tolower);
        cout << sen << endl;
    }
    else if (flag_1 == flag_3)
    {
        transform(sen.begin(), sen.end(), sen.begin(), ::tolower);
        sen[0] = toupper(sen[0]);
        cout << sen << endl;
    }
    else
        cout << sen << endl;
    return 0;
}