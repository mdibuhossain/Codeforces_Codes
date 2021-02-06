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

//========================================
#define READ() freopen("input", "r", stdin)
#define WRITE() freopen("output", "w", stdout)
#define TIME() fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK() clock_t tStart = clock()
#define FiO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
//========================================

//========================================
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vLL vector<ll>
#define vStr vector<string>
#define Mii map<int, int>
#define Msi map<string, int>
#define Mci map<c, int>
#define ll long long int
#define LL long long int
#define ui unsigned int
#define ull unsigned long long int
#define endl '\n'
#define Endl '\n'
#define ENDL '\n'
//========================================

using namespace std;

int main()
{

    //--------------------------MAIN_CODE-------------------------

    FiO;
    ui n;
    cin >> n;
    int mx = 0, res = 0;
    ui common = -1;
    vector<ui> v1(n);
    map<ui, int> m1;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    sort(v1.rbegin(), v1.rend());
    for(int i = 0; i < n; i++)
    {
        m1[v1[i]]++;
        if (m1[v1[i]] > mx)
        {
            mx = m1[v1[i]];
            common = v1[i];
        }
    }
    res += mx * common;
    m1[common] = 0;
    m1[common - 1] = 0;
    m1[common + 1] = 0;
    for (int i = 0; i < n; i++)
    {
        if(m1[v1[i]])
        {
            res += m1[v1[i]] * v1[i];
            m1[v1[i]] = 0;
            m1[v1[i] + 1] = 0;
            m1[v1[i] - 1] = 0;
        }
    }
    cout << res << endl;
    //--------------------------FINISHED--------------------------
    return 0;
}