#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll funFactorial(ll n)
{
    if (n == 0)
        return 1;
    return n * funFactorial(n - 1);
}

int main()
{
    ll M, N, sum;
    while (cin >> M >> N)
    {
        sum = funFactorial(M) + funFactorial(N);
        cout << sum << endl;
    }

    return 0;
}