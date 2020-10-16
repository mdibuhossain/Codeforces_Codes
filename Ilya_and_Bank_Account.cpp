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
    string st;
    cin >> st;
    if (st[0] == '-')
    {
        if (st[st.size() - 1] > st[st.size() - 2])
        {
            st.erase(st.size() - 1, 1);
        }
        else
            st.erase(st.size() - 2, 1);
        if (st[1] == '0')
            cout << 0 << endl;
        else
            cout << st << endl;
    }
    else
        cout << st << endl;
    return 0;
}