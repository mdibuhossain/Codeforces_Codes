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

    int n, m, i = 0, j = 0;
    cin >> n >> m;
    vector<string> v1;
    vector<string> v2;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        v1.push_back(st);
    }
    for (int i = 0; i < m; i++)
    {
        string st;
        cin >> st;
        v2.push_back(st);
    }
    int q;
    ll ni, nii, y;
    cin >> q;
    while (q--)
    {
        cin >> y;
        if (y % n)
            ni = (y % n) - 1;
        else
            ni = n - 1;
        if (y % m)
            nii = (y % m) - 1;
        else
            nii = m - 1;
        cout << v1[ni] << v2[nii] << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}