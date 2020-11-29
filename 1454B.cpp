//#include<bits/stdc++.h>
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
        int MX = 1e6;
        int n, ps, flag = 0;
        cin >> n;
        map<int, int> mp;
        vector<int> vt;
        vector<int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vt.push_back(k);
            mp[k]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[vt[i]] == 1)
            {
                flag = 1;
                MX = min(MX, vt[i]);
            }
        }
        if (flag)
        {
            it = find(vt.begin(), vt.end(), MX);
            cout << it - vt.begin() + 1 << endl;
        }
        else
            cout << "-1" << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}