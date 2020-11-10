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
        int n;
        cin >> n;
        int a[n], b[n], c[n], res[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        res[0] = a[0];
        cout << res[0];
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                if (a[i] != res[0] && a[i] != res[n - 2])
                    cout << " " << a[i];
                else if (b[i] != res[0] && b[i] != res[n - 2])
                    cout << " " << b[i];
                else if (c[i] != res[0] && c[i] != res[n - 2])
                    cout << " " << c[i];
            }

            else if (res[i - 1] != a[i])
            {
                res[i] = a[i];
                cout << " " << res[i];
            }
            else if (res[i - 1] != b[i])
            {
                res[i] = b[i];
                cout << " " << res[i];
            }
            else if (res[i - 1] != c[i])
            {
                res[i] = c[i];
                cout << " " << res[i];
            }
        }
        cout << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}