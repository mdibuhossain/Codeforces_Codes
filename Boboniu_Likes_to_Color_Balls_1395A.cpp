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
        int odd = 0, even = 0;
        ll ar[4];
        for (int i = 0; i < 4; i++)
            cin >> ar[i];
        for (int i = 0; i < 4; i++)
            if (ar[i] & 1)
                odd++;
        if (odd <= 1)
            cout << "YES" << endl;
        else if (ar[0] > 0 && ar[1] > 0 && ar[2] > 0)
        {
            ar[0] -= 1, ar[1] -= 1, ar[2] -= 1, ar[3] += 3;
            odd = 0;
            for (int i = 0; i < 4; i++)
                if (ar[i] & 1)
                    odd++;
            if (odd <= 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}