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
        int n, k, result;
        cin >> n >> k;
        result = n;
        if (n == k)
        {
            result = 1;
        }
        else if (k == 1)
        {
            result = n;
        }
        else if (n < k)
        {
            result = 1;
        }
        else if (n > k)
        {
            for (int i = 1; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    if (i <= k)
                    {
                        result = min(result, n / i);
                    }
                    if (n / i <= k)
                    {
                        result = min(result, i);
                    }
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}