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
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        int count = 0;
        cin >> a >> b;
        if (a == b)
            cout << 0 << endl;
        else if (a < b)
        {
            if (b % a != 0)
            {
                cout << -1 << endl;
            }
            else
            {
                while (b != a)
                {
                    if (a * 8 <= b)
                    {
                        a *= 8;
                        count++;
                    }
                    else if (a * 4 <= b)
                    {
                        a *= 4;
                        count++;
                    }
                    else if (a * 2 <= b)
                    {
                        a *= 2;
                        count++;
                    }
                    else
                    {
                        count = -1;
                        break;
                    }
                }
                cout << count << endl;
            }
        }
        else if (a > b)
        {
            if (a % b != 0)
            {
                cout << -1 << endl;
            }
            else
            {
                while (b != a)
                {
                    if (b * 8 <= a)
                    {
                        b *= 8;
                        count++;
                    }
                    else if (b * 4 <= a)
                    {
                        b *= 4;
                        count++;
                    }
                    else if (b * 2 <= a)
                    {
                        b *= 2;
                        count++;
                    }
                    else
                    {
                        count = -1;
                        break;
                    }
                }
                cout << count << endl;
            }
        }
    }
    return 0;
}