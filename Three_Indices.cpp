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
    while(t--)
    {
        int n, x = 0, y = 0, z = 0;
        cin >> n;
        int ar[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> ar[i];
        for (int i = 2; i <= (n - 1); i++)
        {
            if ((ar[i] > ar[i - 1]) && (ar[i] > ar[i + 1]))
            {
                x = i - 1;
                y = i;
                z = i + 1;
                break;
            }
        }
        if (x and y and z)
            cout << "YES" << endl
                 << x << " " << y << " " << z << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}