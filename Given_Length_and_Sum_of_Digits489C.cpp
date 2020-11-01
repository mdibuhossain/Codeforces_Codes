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

    string s_ma, s_mi;
    int m, s;
    cin >> m >> s;
    if (s == 0 )
    {
        if (m == 1)
            cout << "0 0" << endl;
        else
            cout << "-1 -1" << endl;
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            int x = min(9, s);
            s -= x;
            s_ma.push_back('0' + x);
        }
        if (s > 0)
        {
            cout << "-1 -1" << endl;
            return 0;
        }
        else
        {
            s_mi = s_ma;
            reverse(s_mi.begin(), s_mi.end());
            int i;
            for (i = 0; s_mi[i] == '0'; i++){}
            s_mi[0]++;
            s_mi[i]--;
            cout << s_mi << " " << s_ma << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}