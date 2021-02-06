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
#define ui unsigned int

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
	ui t;
	cin >> t;
	while (t--)
	{
		bool fool = true;
		ui n, d;
		cin >> n >> d;
		ui cont[n];
		for (ui i = 0; i < n; i++)
			cin >> cont[i];
		sort(cont, cont + n);
		ui a = cont[0], b = cont[1];
		for (ui i = 0; i < n; i++)
		{
			if (cont[i] > d)
			{
				if ((a + b) > d)
				{
					fool = false;
					break;
				}
			}
		}
		if (fool)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}



//---------------------------code_finished--------------------------------

#ifndef ONLINE_JUDGE
	TIME();
#endif
	return 0;
}