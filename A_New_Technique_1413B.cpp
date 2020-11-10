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
        int n, m, x;
        cin >> n >> m;
        int col[n * m + 2], row[n * m + 2], res[n + 1][m + 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> x;
                col[x] = j;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> x;
                row[x] = j;
                res[j][col[x]] = x;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0)
                    cout << res[i][j];
                else
                    cout << " " << res[i][j];
            }
            cout << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}