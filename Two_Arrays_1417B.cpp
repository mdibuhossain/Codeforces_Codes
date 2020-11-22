#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <iterator>
#include <bitset>
#include <assert.h>
#include <new>
#include <sstream>
#include <time.h>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
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
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        ll n, T, flag = 0;
        cin >> n >> T;
        ll x = T / 2;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            if (!(T & 1) && (x == k))
            {
                ar[i] = (flag++) % 2;
            }
            else if ((2 * k) < T)
                ar[i] = 0;
            else
                ar[i] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                cout << ar[i];
            else
                cout << " " << ar[i];
        }
        cout << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}