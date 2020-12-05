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
#define READ()      freopen("input", "r", stdin)
#define WRITE()     freopen("output", "w", stdout)
#define TIME()      fprintf(stderr,"Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK()     clock_t tStart = clock()
using namespace std;
using ll = long long int;

int GCD(int n1, int n2)
{
    if(n2)
        return GCD(n2, n1%n2);
    return n1;
}

ll funFactorial(ll n) {if (n == 0) return 1;return n * funFactorial(n - 1);}

vector<ll>primes;
// ll primes[1000005];
bool prime[1000005];
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
    // int k = 0;
    // primes[k++] = 2;
    primes.push_back(2);
    for(ll i = 3; i <= n; i += 2)
        if(isPrime(i)) primes.push_back(i);
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
    seive(1000005);
    int t; cin >> t;
    while(t--)
    {
        ll n, container; cin >> n;
        ll carr = n;
        int count = 0;
        // Prime Factorizatoin
        for(ll i = 0; primes[i] * primes[i] <= n; i++)
        {
            int cnt = 0;
            if(!(n%primes[i]))
            {
                while(!(n%primes[i]))
                {
                    cnt++;
                    n /= primes[i];
                }
            }
            if(cnt > count)
            {
                count = cnt;
                container = primes[i];
            }
        }
        if(carr == n)
        {
            cout << "1\n" << n << endl;
            continue;
        }
        cout << count << endl;
        --count;
        ll res = 1;
        while(count)
        {
            cout << container << " ";
            res *= container;
            count--;
        }
        cout << carr/res << endl;

    }


//---------------------------code finished--------------------------------

    #ifndef ONLINE_JUDGE
        TIME();
    #endif
    return 0;
}