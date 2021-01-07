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

int SortByAbs(const int& a,const int& b){
    return abs(a)==abs(b)?a>b:(abs(a)>abs(b));
}


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
		int n, ps = 0, ng = 0, pp = 1, zr = 0;
		cin >> n;
		vector<int>vt;
		for(int i = 0; i < n; ++i)
		{
			int k;
			cin >> k;
			vt.push_back(k);
			if(k < 0) ng++;
			if(k == 0) zr++;
		}
		sort(vt.begin(), vt.end(), SortByAbs);
		// for(auto &it : vt)
		// {
		// 	cout << it << " ";
		// }
		// cout << endl;
		if(ng == n)
		{
			for(int i = 0; i < 5; ++i)
				pp *= vt[i];
			cout << pp << endl;
		}
		else
		{
			vector<int>neg;
			vector<int>pos;			
			for(int i = 0; i < 5; ++i)
			{
				pp *= vt[i];
				if(vt[i] < 0)
					neg.push_back(vt[i]);
				else if(vt[i] > 0)
					pos.push_back(vt[i]);
			}
			int mal = pp;
			sort(pos.begin(), pos.end());
			sort(neg.begin(), neg.end(), greater<int>());
			// for(auto &it : neg)
			// {
			// 	cout << it << " ";
			// }
			// cout << endl;
			// for(auto &it : pos)
			// {
			// 	cout << it << " ";
			// }
			// cout << endl;
			if(pp < 0)
			{
				// for negative
				for(int i = 5; i < n; ++i)
				{
					if(vt[i] > 0 && neg.size() > 0)
					{
						pp /= neg[0];
						pp*=vt[i];
						break;
					}
				}
				// for positive
				for(int i = 5; i < n; ++i)
				{
					if(vt[i] < 0 && pos.size() > 0)
					{
						mal /= pos[0];
						mal *= vt[i];
						break;
					}
				}
				// if(abs(pp) < abs(mal)) cout << pp << endl;
				// else cout << abs(pp) << endl;
				// cout << pp << endl;
				// cout << mal << endl;
				if(zr)
					cout << max(0, max(mal, pp)) << endl;
				else cout << max(mal, pp) << endl;
			}
			else
			{
				cout << pp << endl;
			}
		}
	}



//---------------------------code_finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}