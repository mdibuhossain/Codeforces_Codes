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
        int n, d;
        cin >> n >> d;
        int ar[n + 1];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        for (int i = 1; i < n; i++)
        {
            if (ar[i])
            {
                int x = ar[i] * i;
                // cout << x;
                if (x >= d)
                {
                    int z = (int)(d / i);
                    ar[0] += z;
                    z *= i;
                    d -= z;
                }
                else
                {
                    d -= x;
                    ar[0] += ar[i];
                }
                // cout << " " << ar[0] << " " << d << endl;
            }
        }
        cout << ar[0] << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}