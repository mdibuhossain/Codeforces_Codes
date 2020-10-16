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
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char st[100];
    int flag = 0;
    cin >> st;
    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == 'H' || st[i] == 'Q' || st[i] == '9' || st[i] == 9)
        {
            cout << "YES" << endl;
            flag = 0;
            break;
        }
        else
            flag = 1;
    }
    if (flag)
        cout << "NO" << endl;
    return 0;
}