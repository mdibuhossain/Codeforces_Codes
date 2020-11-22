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
        int n, q;
        cin >> n >> q;
        char st[110];
        for (int i = 1; i <= n; i++)
            cin >> st[i];
        while (q--)
        {
            int l, r, c1 = 0, c2 = 0;
            cin >> l >> r;
            for (int i = 1; i < l; i++)
                if (st[l] == st[i])
                    c1++;
            for (int i = r + 1; i <= n; i++)
                if (st[r] == st[i])
                    c2++;
            if (c1 || c2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}