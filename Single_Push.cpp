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
        int n, l = 0, r = 0, k, count = 0, flag = 0, x, z = 1;
        cin >> n;
        int a[n + 5], b[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == b[i]) // if equal
            {
                flag++;
            }
            else // if not equal
            {
                k = b[i] - a[i];
                if (k < 0)
                {
                    count = 0;
                    break;
                }
                else
                {
                    if (l == 0)
                    {
                        x = k;
                        l = i;
                        count++;
                    }
                    else
                    {
                        if (k == x)
                        {
                            r = i;
                            z = 1;
                            count++;
                        }
                        else
                        {
                            z = 0;
                            break;
                        }
                    }
                }
            }
        }
        if ((count == ((r - l) + 1)) && count && z)
            cout << "YES" << endl;
        else if ((n == 1 && k >= 0) || (count == 1 && k > 0 && z != 0))
            cout << "YES" << endl;
        else if (flag == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}