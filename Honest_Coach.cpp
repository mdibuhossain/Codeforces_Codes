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
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int sub;
        cin >> n;
        int ar[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sub = 1001;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(ar[i] - ar[j]) < sub)
                {
                    sub = abs(ar[i] - ar[j]);
                }
            }
        }
        cout << sub << endl;
    }
    return 0;
}