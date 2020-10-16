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
#define endl "\n";
int main()
{
    int n;
    cin >> n;
    int ar[n + 1][n + 1];
    for (int i = 0; i < n; i++)
    {
        ar[i][0] = 1;
        for (int j = 1; j < n; j++)
        {
            if (i == 0)
                ar[i][j] = 1;
            else
                ar[i][j] = ar[i - 1][j] + ar[i][j - 1];
        }
    }
    cout << ar[n - 1][n - 1] << endl;
    return 0;
}