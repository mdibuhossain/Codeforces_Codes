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
        int n, x, fi, si, mines = 0, s1 = 0, s2, length;
        cin >> n >> x;
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s1 += a[i];
            if (a[i] % x == 0)
                mines++;
        }
        if (s1 % x != 0)
            cout << n << endl;
        else if (mines == n)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % x != 0)
                {
                    fi = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] % x != 0)
                {
                    si = i;
                    break;
                }
            }
            // while (true)
            // {
            //     s2 = accumulate(a + fi, a + si + 1, 0);
            //     if (s2 % x != 0)
            //     {
            //         length = (si - fi) + 1;
            //         break;
            //     }
            //     else fi++;
            // }
            cout << fi << " " << si << endl;
            cout << (n - min(fi, si)) << endl;
        }
    }
    return 0;
}