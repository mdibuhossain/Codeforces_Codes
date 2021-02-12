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
		string s1, s2;
		cin >> s1;
		cin >> s2;
		ui l1 = s1.size();
		ui l2 = s2.size();
		ui total = l1 * l2;
		ui a = total / l1, b = total / l2;
		string t1 = s1, t2 = s2;
		for (ui i = 0; i < a - 1; i++)
			s1 += t1;
		for (ui i = 0; i < b - 1; i++)
			s2 += t2;

		if (s1 != s2)
			cout << "-1\n";
		else
		{
			ui gcd = (l1 * l2) / __gcd(l1, l2);
			if (l1 == gcd)
				cout << t1 << endl;
			else if (l2 == gcd)
				cout << t2 << endl;
			else
			{
				string tt = t1;
				for (ui i = 0; i < (gcd / l1 ) - 1; i++)
				{
					tt += t1;
				}
				cout << tt << endl;
			}
		}
	}



//---------------------------code_finished--------------------------------

#ifndef ONLINE_JUDGE
	TIME();
#endif
	return 0;
}