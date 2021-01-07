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
		vector<int>vp;
		vector<int>vp2;
		for(int i = 0; i < n; i++)
		{
			int k;
			cin >> k;
			vp.push_back(k);
		}
		vp2 = vp;
		sort(vp.begin(), vp.end());
		sort(vp2.begin(), vp2.end());
		int pp = 0;
		int pp2 = 0;
		for(int i = 0; i < vp.size(); i++)
		{
			bool flag = true;
			if(vp[i] > 0)
			{
				for(int k = 0; k < vp.size(); k++)
				{
					if((vp[i]&1) == (vp[k]&1) && vp[k] > 0 && i != k)
					{
						vp[i] = 0;
						vp[k] = 0;
						pp++;
						flag = false;
						break;
					}
				}

				if(flag)
				{
					for(int j = 0; j < vp.size(); j++)
					{
						if(abs(vp[i]-vp[j]) == 1 && vp[j] > 0)
						{
							vp[i] = 0;
							vp[j] = 0;
							pp++;
							break;
						}
					}
				}
			}
		}

		for(int i = 0; i < vp2.size(); i++)
		{
			bool flag = true;
			if(vp2[i] > 0)
			{
				for(int j = 0; j < vp2.size(); j++)
				{
					if(abs(vp2[i]-vp2[j]) == 1 && vp2[j] > 0)
					{
						vp2[i] = 0;
						vp2[j] = 0;
						pp2++;
						flag = false;
						break;
					}
				}
				if(flag)
				{
					for(int k = 0; k < vp2.size(); k++)
					{
						if((vp2[i]&1) == (vp2[k]&1) && vp2[k] > 0 && i != k)
						{
							vp2[i] = 0;
							vp2[k] = 0;
							pp2++;
							break;
						}
					}
				}
			}
		}

		if(pp == (n/2) || pp2 == (n/2))
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}



//---------------------------code_finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}