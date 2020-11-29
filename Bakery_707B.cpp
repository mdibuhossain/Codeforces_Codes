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
ll mn = 1e18;
int ar[1000000];
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

    int n, m, k, flag = -1;
    vector<pair<pair<int, int>, ll>> vt;
    cin >> n >> m >> k;
    while (m--)
    {
        ll u, v, l;
        cin >> u >> v >> l;
        vt.push_back({{u, v}, l});
    }
    if (k == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            int k;
            cin >> k;
            ar[k] = 1;
        }
        int x, y;
        ll z;
        for (int i = 0; i < vt.size(); i++)
        {
            x = vt[i].first.first, y = vt[i].first.second, z = vt[i].second;
            if (!ar[x] && ar[y] || ar[x] && !ar[y])
                mn = min(mn, z);
        }
        if (mn == 1e18)
            cout << "-1\n";
        else
            cout << mn << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}