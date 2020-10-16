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
int comp(int n)
{
    int r1, r2, r3, r4;
    r1 = n % 10;
    r2 = (n % 100) / 10;
    r3 = (n % 1000) / 100;
    r4 = n / 1000;
    if (r1 == r2 || r1 == r3 || r1 == r4 || r2 == r3 || r2 == r4 || r3 == r4)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    n = n + 1;
    while (1)
    {
        if (comp(n))
        {
            n++;
        }
        else
        {
            break;
        }
    }
    cout << n << endl;
    return 0;
}