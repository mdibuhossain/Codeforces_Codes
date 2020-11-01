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

    string s1, s2, ss;
    cin >> s1 >> s2 >> ss;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    sort(ss.begin(), ss.end());
    int flag1, flag2;

    if ((s1.size() + s2.size()) == ss.size())
    {
        for (int i = 0; i < s1.size(); i++)
        {
            flag1 = 0;
            for (int j = 0; j < ss.size(); j++)
            {
                if (s1[i] == ss[j])
                {
                    ss.erase(j, 1);
                    flag1 = 1;
                    break;
                }
            }
            if (!flag1)
                break;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            flag2 = 0;
            for (int j = 0; j < ss.size(); j++)
            {
                if (s2[i] == ss[j])
                {
                    ss.erase(j, 1);
                    flag2 = 1;
                    break;
                }
            }
            if (!flag2)
                break;
        }
        if (flag1 && flag2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}