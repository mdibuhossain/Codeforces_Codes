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
int div(int n)
{
    int od = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i & 1)
            {
                od = i;
            }
            else if ((n / i) & 1)
            {
                od = (n / i);
            }
        }
    }
    return od;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0, odd;
        cin >> n;
        while (n != 1)
        {
            if (n & 1)
            {
                n /= n;
                flag++;
            }
            else if (n <= 10)
            {
                if (n % 2 == 0)
                {
                    n -= 1;
                    flag++;
                }
            }
            else
            {
                odd = div(n);
                if (odd == 0)
                {
                    n -= 1;
                    flag++;
                }
                else
                {
                    n /= odd;
                    flag++;
                }
            }
        }
        if (flag & 1)
        {
            cout << "Ashishgup" << endl;
        }
        else
            cout << "FastestFinger" << endl;
    }
    return 0;
}