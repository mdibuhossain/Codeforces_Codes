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
        string st;
        int n;
        cin >> n;
        getchar();
        cin >> st;
        if (n > 2)
        {
            cout << "YES" << endl << 2 << endl << st[0] << " ";
            for (int i = 1; i < st.size(); i++)
                cout << st[i];
            cout << endl;
        }
        else
        {
            if (st[0] < st[1])
            {
                cout << "YES" << endl << 2 << endl << st[0] << " " << st[1] << endl;

            }
            else cout << "NO" << endl;
        }
    }

    return 0;
}