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
#define READ()		freopen("input", "r", stdin)
#define WRITE()		freopen("output", "w", stdout)
#define TIME()		fprintf(stderr,"Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK()		clock_t tStart = clock()
#define FASTio	ios_base::sync_with_stdio(false); \
				cin.tie(NULL);
#define endl '\n'
using namespace std;
using ll = long long int;



// ll funFactorial(ll n) {if (n == 0) return 1;return n * funFactorial(n - 1);}

//--------------------GCD_Start---------------
/*
int GCD(int n1, int n2)
{
	if(n2)
		return GCD(n2, n1%n2);
	return n1;
}
*/
//--------------------GCD_End-----------------


// --------------Seive_Prime_Start------------
/*
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
*/
// --------------Seive_Prime_Stop------------



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
		int n;
		cin >> n;
		vector<int> vt;
		map<int , int>mp1;
		map<int , int>mp2;
		for (int i = 0; i < n; ++i)
		{
			int k; cin >> k;
			vt.push_back(k);
			mp1[k]++;
		}
		// mp2[vt[0]]++;
		for (int i = 1; i < n; ++i)
		{
			if(mp1[vt[i]] > 1 && mp2[vt[i] + 1] == 0)
			{
				vt[i]++;
				mp2[vt[i]]++;
				mp1[vt[i]]++;
			}
			else
				mp2[vt[i]]++;
		}
		mp2[vt[0]]++;
		cout << mp2.size() << endl;
	}



//---------------------------code_finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}