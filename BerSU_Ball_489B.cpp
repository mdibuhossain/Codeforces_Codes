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

    int n, m, cnt = 0;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b, b + n);
    cin >> m;
    int g[m];
    for (int i = 0; i < m; i++)
        cin >> g[i];
    sort(g, g + m);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = x; j < m; j++)
        {
            if (abs(b[i] - g[j]) <= 1)
            {
                cnt++;
                x = j + 1;
                break;
            }
        }
    }
    cout << cnt << endl;

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}