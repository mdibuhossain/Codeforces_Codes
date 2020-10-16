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
        int n, flag = 0, even = 0, odd = 0;
        cin >> n;
        int ar[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            (ar[i] % 2 == 0) ? even++ : odd++;
        }
        sort(ar, ar + n);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << ar[i] << " ";
        // }
        if (even % 2 != odd % 2)
        {
            flag = 0;
        }
        else
        {
            if (even % 2 == 0 && odd % 2 == 0)
            {
                flag = 1;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if ((ar[i] % 2 != ar[j] % 2) && (abs(ar[i] - ar[j]) == 1))
                        {
                            flag = 1;
                            break;
                        }
                        else
                        {
                            flag = 0;
                        }
                    }
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}