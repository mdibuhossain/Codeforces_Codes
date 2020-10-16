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
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int x = n;
        if (x == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            while (x != 1)
            {
                if ((x % 2 == 0) && (x % 6 != 0))
                {
                    count = -1;
                    break;
                }

                if (x % 6 == 0)
                {
                    x = x / 6;
                    count++;
                }
                else
                {
                    x = x * 2;
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}