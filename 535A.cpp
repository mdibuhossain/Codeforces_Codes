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

	// -_-  


	string a[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	string b[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	string c[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

	int n;
	cin >> n;
	int x, y;
	x = n / 10;
	y = n % 10;

	if(!x)
		cout << b[n] << endl;
	else if(x == 1)
	{
		cout << c[x + y] << endl;
	}
	else
	{
		cout << a[x];
		if(y)
			cout << "-" << b[y] << endl;
		else cout << endl;
	}





//---------------------------code_finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}