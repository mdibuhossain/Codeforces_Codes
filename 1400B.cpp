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
// --------------Seive_Prime_Start------------



int main()
{
	#ifndef ONLINE_JUDGE
		CLOCK();
		//READ();
		//WRITE();
	#endif
//---------------------------code_start_from_here-------------------------



	int t;
	cin >> t;
	while(t--)
	{
		int c1 = 0, c2 = 0;
		ll p, f, cnt_s, cnt_w, s, w;
		cin >> p >> f;
		cin >> cnt_s >> cnt_w;
		cin >> s >> w;
		ll pp = p, ff = f, c_s = cnt_s, c_w = cnt_w;

		// ====================================
		while(p >= s && cnt_s)
		{
			if((p / s) > cnt_s)
			{
				p -= cnt_s * s;
				cnt_s = 0;				
			}
			else
			{
				cnt_s -= p / s;
				p -= (int)(p / s) * s;
			}
		}
		while(p >= w && cnt_w)
		{
			if((p / w) > cnt_w)
			{
				p -= cnt_w * w;
				cnt_w = 0;				
			}
			else
			{
				cnt_w -= p / w;
				p -= (int)(p / w) * w;
			}
		}
		while(f >= w && cnt_w)
		{
			if((f / w) > cnt_w)
			{
				f -= cnt_w * w;
				cnt_w = 0;				
			}
			else
			{
				cnt_w -= f / w;
				f -= (int)(f / w) * w;
			}
		}
		while(f >= s && cnt_s)
		{
			if((f / s) > cnt_s)
			{
				f -= cnt_s * s;
				cnt_s = 0;				
			}
			else
			{
				cnt_s -= f / s;
				f -= (int)(f / s) * s;
			}
		}
		// ====================================


		// ====================================
		while(pp >= w && c_w)
		{
			if((pp / w) > c_w)
			{
				pp -= c_w * w;
				c_w = 0;				
			}
			else
			{
				c_w -= pp / w;
				pp -= (int)(pp / w) * w;
			}
		}
		while(pp >= s && c_s)
		{
			if((pp / s) > c_s)
			{
				pp -= c_s * s;
				c_s = 0;				
			}
			else
			{
				c_s -= pp / s;
				pp -= (int)(pp / s) * s;
			}
		}
		while(ff >= s && c_s)
		{
			if((ff / s) > c_s)
			{
				ff -= c_s * s;
				c_s = 0;				
			}
			else
			{
				c_s -= ff / s;
				ff -= (int)(ff / s) * s;
			}
		}
		while(ff >= w && c_w)
		{
			if((ff / w) > c_w)
			{
				ff -= c_w * w;
				c_w = 0;				
			}
			else
			{
				c_w -= ff / w;
				ff -= (int)(ff / w) * w;
			}
		}
		// ====================================

		cout << max(c1, c2) << endl;
	}



//---------------------------code_finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}