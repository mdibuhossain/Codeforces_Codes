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
        int n, m, flag = 0, xxx, k;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            mp[k]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> k;
            if (mp[k] >= 1)
            {
                flag = 1;
                xxx = k;
            }
        }
        if (flag)
            cout << "YES" << endl
                 << 1 << " " << xxx << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}