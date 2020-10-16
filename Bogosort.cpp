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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        vector<int> vt;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            vt.push_back(k);
        }
        sort(vt.begin(), vt.end(), greater<int>());
        for (vector<int>::iterator it = vt.begin(); it != vt.end(); it++)
        {
            if (it == vt.begin()) cout << *it;
            else cout << " " << *it;
        }
        cout << endl;
    }
    return 0;
}