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
        int n;
        cin >> n;
        vector<int> vt;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vt.push_back(k);
            if (i > 0)
            {
                if (vt[i] != vt[i - 1])
                    mp[vt[i - 1]]++;
            }
        }
        mp[vt[n - 1]]++;
        if ((mp.size() == 1 && n > 1) || n == 1)
            cout << "0" << endl;
        else if (mp.size() == n && n > 1)
            cout << "1" << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (vt[i] == vt[0] || vt[n - 1] == vt[i])
                {
                    if (vt[i] == vt[0] && vt[n - 1] == vt[i])
                        MX = min(MX, mp[vt[i]] - 1);
                    else
                        MX = min(MX, mp[vt[i]]);
                }
                else
                    MX = min(MX, mp[vt[i]] + 1);
            }
            cout << MX << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}