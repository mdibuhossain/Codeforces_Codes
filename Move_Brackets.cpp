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
        int n, ob = 0, cb = 0, wr = 0;
        cin >> n;
        getchar();
        string st;
        cin >> st;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == '(')
            {
                ob++;
            }
            else
            {
                if (ob)
                {
                    ob--;
                }
                else
                {
                    cb++;
                }
            }
        }
        cout << min(ob, cb) << endl;
    }
    return 0;
}