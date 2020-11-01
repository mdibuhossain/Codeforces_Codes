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

    int n, cnt;
    cin >> n;
    int ar[n + 1], sk[4] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        if(ar[i] == 1) sk[ar[i]]++;
        if(ar[i] == 2) sk[ar[i]]++;
        if(ar[i] == 3) sk[ar[i]]++;
    }
    int x, y, z, cc = 0;
    x = y = z = 0;
    cnt = min(sk[1], min(sk[2], sk[3]));
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
    {
        for (int j = 1+x; j <= n; j++)
        {
            if((ar[j] == 1) && (j > x))
            {
                x = j;
                cout << x;
                break;
            }
        }
        for (int j = 1+y; j <= n; j++)
        {
            if((ar[j] == 2) && (j > y))
            {
                y = j;
                cout << " " << y;
                break;
            }
        }
        for (int j = 1+z; j <= n; j++)
        {
            if((ar[j] == 3) && (j > z))
            {
                z = j;
                cout << " " << z;
                break;
            }
        }
        cout << endl;        
    }    

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}