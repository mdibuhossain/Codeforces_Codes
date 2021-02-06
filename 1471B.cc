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
#define READ()		freopen("input", "r", stdin)
#define WRITE()		freopen("output", "w", stdout)
#define TIME()		fprintf(stderr,"Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK()		clock_t tStart = clock()
#define FASTio	ios_base::sync_with_stdio(false); \
				cin.tie(NULL);

#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vLL vector<ll>
#define Mii map<int, int>
#define Msi map<string, int>
#define Mci map<c, int>
#define ll long long int
#define LL long long int

using namespace std;


// ll funFactorial(ll n) {if (n == 0) return 1;return n * funFactorial(n - 1);}


int main()
{
	#ifndef ONLINE_JUDGE
		CLOCK();
		//READ();
		//WRITE();
	#endif
//---------------------------code_start_from_here-------------------------


	FASTio;
	int t;
	cin >> t;
	while(t--)
	{
		ll n, x, sum = 0, idx = 0;
		cin >> n >> x;
		vLL vv;
		bool div = true;
		for(int i = 0; i < n; i++)
		{
			ll inp;
			cin >> inp;
			vv.pb(inp);
			sum += inp;
			if(!(inp%x) && div)
			{
				ll fol = inp / x;
				if(!(fol%x))
					div = false;
			}
		}
		// cout << sum << endl;
		for(ll j = 0; j < n; j++)
		{
			ll i = 1, car;
			car = vv[j];
			while(car%x==0)
			{
				car /= x;
				sum +=  car * pow(x, i++);
				// cout << car << " " << sum << endl;
			}
		}
		// cout << sum << endl;
	}



//---------------------------code_finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}