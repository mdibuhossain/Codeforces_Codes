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
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double x, pers = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pers += (x / (double)100);
    }
    // cout << fixed << setpercision(2) << (pers / (double)n) << endl;
    printf("%0.13lf\n", (pers / (double)n)*100);
    return 0;
}