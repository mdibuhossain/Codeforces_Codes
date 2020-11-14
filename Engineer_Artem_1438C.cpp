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
        ll k;
        int n, m;
        cin >> n >> m;
        int ar[n + 2][m + 2];
        ar[0][0] = 0, ar[n + 1][0] = 0, ar[0][m + 1] = 0, ar[n + 1][m + 1] = 0;
        for (int i = 1; i <= n; i++)
        {
            ar[i][0] = 0, ar[i][m + 1] = 0;
            for (int j = 1; j <= m; j++)
            {
                cin >> ar[i][j];
                if (i == 1)
                    ar[i - 1][j] = 0;
                else if (i == n)
                    ar[i + 1][j] = 0;
            }
        }

        // for (int i = 0; i < n + 2; i++)
        // {
        //     for (int j = 0; j < m + 2; j++)
        //     {
        //         if (j == 0)
        //             cout << ar[i][j];
        //         else
        //             cout << " " << ar[i][j];
        //     }
        //     cout << endl;
        // }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i & 1)
                {
                    if (j & 1)
                    {
                        if (ar[i][j] & 1)
                            ar[i][j]++;
                    }
                    else
                    {
                        if (!(ar[i][j] & 1))
                            ar[i][j]++;
                    }
                }
                else
                {
                    if (j & 1)
                    {
                        if (!(ar[i][j] & 1))
                            ar[i][j]++;
                    }
                    else
                    {
                        if (ar[i][j] & 1)
                            ar[i][j]++;
                    }
                }
                // if (ar[i][j] == ar[i][j - 1] || ar[i][j] == ar[i][j + 1] || ar[i][j] == ar[i + 1][j] || ar[i][j] == ar[i - 1][j])
                // {
                //     // if (!((ar[i][j - 1] - ar[i][j]) == 1 || (ar[i][j + 1] - ar[i][j]) == 1 || (ar[i + 1][j] - ar[i][j]) == 1 || (ar[i - 1][j] - ar[i][j]) == 1))
                //     ar[i][j]++;
                // }
                if (j == 1)
                    cout << ar[i][j];
                else
                    cout << " " << ar[i][j];
            }
            cout << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}