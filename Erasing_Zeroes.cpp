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
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string st;
        cin >> st;
        int ones = 0, zero_c = 0, sum = 0;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == '1' && ones == 0)
                ones = 1;
            else if (st[i] == '0' && ones == 1)
                zero_c++;
            else if (st[i] == '1' && ones == 1)
                sum = zero_c;
        }
        cout << sum << endl;
    }
    return 0;
}