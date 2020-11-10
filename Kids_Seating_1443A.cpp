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

int gcdF(int a, int b)
{
    if (a == 0 && b == 0)
        return 0;
    return __gcd(a, b);
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
        int nn = n * 4;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                cout << nn;
            else
            {
                nn -= 2;
                cout << " " << nn;
            }
        }
        cout << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}