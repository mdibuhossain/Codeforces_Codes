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
		int n, x;
		cin >> n >> x;
		int xx = x;
		vector<int>ar;
		string st;
		cin >> st;
		int f_idx = 0, l_idx = (int)st.size() - 1, f_cnt = 0, l_cnt = 0, scr = 0, w_cnt = 0, inner_L = 0;
		int len = st.size();
		for (int i = 0; i < len; ++i)
		{
			if(st[i] == 'W')
			{
				f_idx = i;
				break;
			}
			else f_cnt++;
		}
		for(int i = (len - 1); i >= 0; i--)
		{
			if(st[i] == 'W')
			{
				l_idx = i;
				break;
			}
			else l_cnt++;
		}
		// cout << f_idx << " " << l_idx << endl;
		// cout << f_cnt << " " << l_cnt << endl;
		int flag = 0;
		for(int i = f_idx; i <= l_idx + 1; ++i)
		{
			if(st[i] == 'W')
			{
				flag = 1;
				w_cnt++;
				if(inner_L)
				{
					ar.push_back(inner_L);
					inner_L = 0;
				}
			}
			else
			{
				inner_L++;
				if(w_cnt)
				{
					scr += ((w_cnt - 1)*2 + 1);
					w_cnt = 0;
				}
			}
		}
		sort(ar.begin(), ar.end());
		for(auto &it:ar)
		{
			if(x <= 0)
				break;
			else
			{
				if(it <= x)
				{
					scr += (it * 2) + 1;					
					x -= it;
				}
				else
				{
					scr += (x * 2);
					x = 0;
				}
			}
		}
		if(l_cnt && x)
		{
			if(l_cnt <= x)
			{
				scr += l_cnt*2;
				x -= l_cnt;
			}
			else
			{
				scr += x * 2;
				x = 0;
			}
		}
		if(f_cnt && x)
		{
			if(f_cnt <= x)
			{
				scr += (f_cnt - 1)*2 + 2;
				x -= f_cnt;
			}
			else
			{
				scr += (x - 1) * 2 + 2;
				x = 0;
			}
		}
		if(flag)
			cout << scr << endl;
		else
		{
			if(xx) cout << scr - 1 << endl;
			else cout << scr << endl;
		}
	}



//---------------------------code_finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}