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
    int n, m, b = 1006;
    cin >> n >> m;
    int ar[m + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + m); // sort in Ascending order

    for (int i = 0; i <= (m - n); i++)
    {
        b = min(b, (ar[i + n - 1] - ar[i]));
    }
    cout << b << endl;
    return 0;
}