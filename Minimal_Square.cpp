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
        int m, n, a, b, width, height;
        cin >> m >> n;
        (m > n) ? (a = m, b = n) : (a = n, b = m);
        if (((a > b) && b == 1))
        {
            width = a;
            height = a;
        }
        else if ((b * 2) == a)
        {
            width = a;
            height = a;
        }
        else if ((b * 2) < a)
        {
            width = height = a;
        }
        else if (a == b)
        {
            width = a + b;
            height = a + b;
        }
        else if ((b * 2) > a)
        {
            width = a + ((b * 2) - a);
            height = b * 2;
        }
        cout << width * height << endl;
    }
    return 0;
}