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
    int n;
    cin >> n;
    int x, y;
    if (n % 2 == 0)
    {
        cout << (n / 2) << endl;
        for (int i = 0; i < (n / 2); i++)
        {
            if (i == 0)
                cout << 2;
            else
                cout << " " << 2;
        }
        cout << endl;
    }
    else
    {
        x = (n / 2) - 1;
        y = n - (2 * x);
        cout << (x + 1) << endl;
        for (int i = 0; i < x; i++)
        {
            if (i == 0)
                cout << 2;
            else
                cout << " " << 2;
        }
        if (x)
            cout << " " << y << endl;
        else
            cout << y << endl;
    }
    return 0;
}