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
typedef long long int ll;
void odd_seq(ll k)
{
    cout << ((2 * k) - 1) << endl;
}
void even_seq(ll n, ll k)
{
    ll x;
    if (n & 1)
        x = k - ((n / 2) + 1);
    else
        x = k - (n / 2);
    cout << (2 * x) << endl;
}
void even_seq_mod(ll n, ll k)
{
    ll x = k - (n / 2);
    cout << (2 * x) << endl;
}
int main()
{
    ll n, k;
    cin >> n >> k;
    if (n & 1) // if 'n' is an odd number
    {
        if (k <= ((n / 2) + 1))
        {
            odd_seq(k);
        }
        else
        {
            even_seq(n, k);
        }
    }

    else // if 'n' is an even number
    {
        if (k <= (n / 2))
        {
            odd_seq(k);
        }
        else
        {
            even_seq(n, k);
        }
    }

    return 0;
}