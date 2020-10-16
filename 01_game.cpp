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
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag, count = 0, i;
        string st;
        cin >> st;
        for (i = 0; i < st.size() - 1;)
        {
            if (st.size() <= 1)
                break;
            else if (st[i] != st[i + 1])
            {
                st.erase(i, 2);
                count++;
                i = 0;
            }
            else
                i++;
            // cout << st;
            // cout << " " << count << endl;
        }
        if (count & 1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
    return 0;
}