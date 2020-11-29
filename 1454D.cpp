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
#define READ()        freopen("input", "r", stdin)
#define WRITE()        freopen("output", "w", stdout)
#define TIME()        fprintf(stderr,"Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK()        clock_t tStart = clock()
using namespace std;
using ll = long long int;

int GCD(int n1, int n2)
{
    if(n2)
        return GCD(n2, n1%n2);
    return n1;
}

ll funFactorial(ll n) {if (n == 0) return 1;return n * funFactorial(n - 1);}

bool prime[100000000];
ll isPrime(ll n)
{
    if(n < 2) return false;
    return prime[n];
}
void seive(ll n)
{
    for(ll i = 2; i <= n; i++)
        if(prime[i])
        {
            for(ll j = i * i; j <= n; j += i)
                prime[j] = false;
        }
}

int main()
{
    #ifndef ONLINE_JUDGE
        CLOCK();
        //READ();
        //WRITE();
    #endif
//---------------------------code_start_from_here-------------------------


    memset(prime, true, sizeof(prime));
    seive(10000000000);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 2)
            cout << "1\n2" << endl;
        else if (n & 1)
            cout << "1\n"
                 << n << endl;
        else
        {
            vector<ll> vt;
            while (true)
            {
                ll x = n / 2;
                n /= 2;
                if (!(x & 1))
                    vt.push_back(2);
                else
                {
                    vt.push_back(x * 2);
                    break;
                }
            }
            cout << vt.size() << endl;
            for (int i = 0; i < vt.size(); i++)
            {
                if (i == 0)
                    cout << vt[i];
                else
                    cout << " " << vt[i];
            }
            cout << endl;
        }
    }


//---------------------------code finished--------------------------------

    #ifndef ONLINE_JUDGE
        TIME();
    #endif
    return 0;
}