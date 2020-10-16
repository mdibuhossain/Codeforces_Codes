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
int isPrime(int n)
{
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag)
        return 0; // not prime
    else
        return 1; // prime
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, prm = 0;
        cin >> n;
        if (n % 2 == 0)
            cout << (n / 2) << " " << (n / 2) << endl;
        else
        {
            prm = isPrime(n);
            if (prm)
            {
                cout << 1 << " " << (n - 1) << endl;
            }
            else
            {
                for (int i = 2; i <= n; i++)
                {
                    if (n % i == 0)
                    {
                        x = n / i;
                        y = n - x;
                        break;
                    }
                }
                cout << x << " " << y << endl;
            }
        }
    }
    return 0;
}