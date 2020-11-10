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
        int ar[110] = {0}, cnt = 0, j = 0, one = 0;
        string st;
        cin >> st;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == '1')
            {
                if (i == st.size() - 1 && st[i] == '1' && cnt)
                {
                    cnt++;
                    ar[j++] = cnt;
                    cnt = 0;
                }
                else if (st[i] == st[i + 1])
                    cnt++;
                else if (st[i] != st[i + 1] && cnt)
                {
                    cnt++;
                    ar[j++] = cnt;
                    cnt = 0;
                }
                else
                    ar[j++] = 1;
            }
        }
        sort(ar, ar+j, greater<int>());
        for (int i = 0; i < j; i+=2)
            cnt += ar[i];
        cout << cnt << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}