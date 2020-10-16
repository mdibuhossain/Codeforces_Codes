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
typedef long double ld;
int main()
{
    int n, k;
    ld dis;
    cin >> n >> k;
    int ar[n + 1];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    ld x = max((ld)ar[0] - 0.0, (ld)k - (ld)ar[n - 1]);
    for (int i = 1; i < n; i++)
    {
        dis = ((ld)ar[i] - (ld)ar[i - 1]) / 2.0;
        x = max(x, dis);
    }
    cout << fixed << setprecision(9) << x << endl;
    return 0;
}