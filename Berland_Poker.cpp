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
        int n, m, k;
        cin >> n >> m >> k;
        if (((m / k) == (n / k)) || m == 0)
        {
            cout << 0 << endl;
        }
        else if (m < k)
        {
            if ((m <= (n / k)))
            {
                cout << m << endl;
            }
            

        }
        else
        {
            int x, y;
            x = n / k;
            if ((x >= m))
            {
                cout << m << endl;
            }
            else
            {
                y = m - (n / k);
                if (y >= (n / k))
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << (n / k) - (m - (n / k)) << endl;
                }
            }
        }
    }
    return 0;
}