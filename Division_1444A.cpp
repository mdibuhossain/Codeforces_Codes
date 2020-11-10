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
        ll p, q, i = 0;
        cin >> p >> q;
        ll pp = p, qq = q, sq = sqrt(pp);
        vector<ll> vt;
        for (ll i = 1; i <= sq; i++)
        {
            if (!(pp % i))
            {
                vt.push_back(i);
                vt.push_back(pp / i);
            }
        }
        sort(vt.begin(), vt.end(), greater<int>());
        for (ll i = 0; i < vt.size(); i++)
        {
            cout << vt[i] << " ";
            // if (!(p % vt[i]) && (vt[i] % q))
            // {
            //     cout << vt[i] << endl;
            //     break;
            // }
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}