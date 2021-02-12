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
    vector<ui> vp(n);
    vector<int> vc_nt(1e6, 0);
    vector<pair<int, int>> vpp(n);
    vector<pair<int, int>> vpp2(n);
    map<ui, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i];
        if (vc_nt[vp[i]] == 1)
        {
            vpp[mp[vp[i]]].first++;
            vpp2[mp[vp[i]]].second++;
        }
        else
        {
            vc_nt[vp[i]] = 1;
            mp[vp[i]] = i;

            vpp[i].first = 1;
            vpp[i].second = vp[i];

            vpp2[i].first = vp[i];
            vpp2[i].second = 1;
        }
    }
    vector<int> vc_nt2 = vc_nt;
    sort(vpp.rbegin(), vpp.rend());
    sort(vpp2.rbegin(), vpp2.rend());
    ll point = 0, point2 = 0;
    for (auto it : vpp)
    {
        // cout << it.first << " " << it.second << endl;
        if (it.first && it.second && vc_nt[it.second])
        {
            point += it.first * it.second;
            vc_nt[it.second] = 0;
            vc_nt[it.second - 1] = 0;
            vc_nt[it.second + 1] = 0;
        }
    }
    // cout << endl;
    for (auto it : vpp2)
    {
        // cout << it.first << " " << it.second << endl;
        if (it.first && it.second && vc_nt2[it.first])
        {
            point2 += it.first * it.second;
            vc_nt2[it.first] = 0;
            vc_nt2[it.first - 1] = 0;
            vc_nt2[it.first + 1] = 0;
        }
    }

    cout << max(point, point2) << endl;

    //--------------------------FINISHED--------------------------
    return 0;
}