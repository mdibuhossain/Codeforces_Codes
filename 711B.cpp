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
#define pb push_back
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
	int n;
	cin >> n;
	ll ar[n][n], sum[5] = {0};
	map<ll, int>mp;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> ar[i][j];
		}
	}
	bool f1 = false;
	bool f2 = false;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(ar[i][j] == 0)
				f1 = true;
			sum[0] += ar[i][j];
			sum[3] += ar[j][i];
			if(ar[i][j] == 0)
				f2 = true;
			if(i == j)
			{
				sum[1] += ar[i][j];
			}
			if(j == (n - i - 1))
			{
				sum[2] += ar[i][j];
			}
		}
		mp[sum[0]]++;
		mp[sum[3]]++;
		if(f2)
		{
			sum[4] = sum[0];
			f2 = false;
		}
		sum[0] = 0;
		sum[3] = 0;
	}
	mp[sum[1]]++;
	mp[sum[2]]++;
	if(f1 && n == 1)
		cout << "1" << endl;
	else if(mp.size() != 2)
		cout << "-1" << endl;
	else if(mp.size() == 2)
	{
		bool f3 = true;
		for(auto it : mp)
		{
			if(it.first < sum[4])
			{
				f3 = false;
				cout << "-1" << endl;
				break;
			}
		}
		if(f3)
		{
			ll x = 0;
			int i = 0;
			for(auto it : mp)
			{
				if(i = 0)
				{
					x = it.first;
					i++;
				}
				else
					x = it.first - x;
			}
			cout << x << endl;
		}
	}




//---------------------------code_finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}