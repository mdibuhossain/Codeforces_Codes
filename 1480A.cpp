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
#define endl '\n'
#define READ() freopen("input", "r", stdin)
#define WRITE() freopen("output", "w", stdout)
#define TIME() fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK() clock_t tStart = clock()
#define pb push_back
#define vStr vector<string>
#define vi vector<int>
#define vll vector<ll>
#define vLL vector<ll>
#define Mii map<int, int>
#define Msi map<string, int>
#define Mci map<c, int>
#define ll long long int
#define LL long long int
#define ui unsigned int
#define ull unsigned long long int
#define FASTio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

// ll funFactorial(ll n) {if (n == 0) return 1;return n * funFactorial(n - 1);}

int main()
{

    //---------------------------code_start_from_here-------------------------

    FASTio;
    ui t;
    cin >> t;
    while (t--)
    {
        string st, res = "";
        cin >> st;
        for (int i = 0; i < st.size(); i++)
        {
            if (!(i & 1))
            {
                if (st[i] == 'a')
                {
                    res += 'b';
                }
                else
                    res += 'a';
            }
            else
            {
                if (st[i] == 'z')
                    res += 'y';
                else
                    res += 'z';
            }
        }
        cout << res << endl;
    }

    //---------------------------code_finished--------------------------------

    return 0;
}