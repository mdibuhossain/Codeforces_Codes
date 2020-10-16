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
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, flag;
        ll result;
        cin >> a >> b >> c >> d;
        if (b >= a)
        {
            result = b;
        }
        else if (c <= d)
        {
            result = -1;
        }
        else
        {
            flag = (a - b) % (c - d);
            if (flag == 0)
            {
                flag = (a - b) / (c - d);
                result = (ll)b + ((ll)flag * (ll)c);
            }
            else
            {
                flag = ((a - b) / (c - d)) + 1;
                result = (ll)b + ((ll)flag * (ll)c);
            }
        }
        cout << result << endl;
    }
    return 0;
}