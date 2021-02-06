#include<bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define TIME()		fprintf(stderr,"Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK()		clock_t tStart = clock()
#define READ()		freopen("input", "r", stdin)
#define WRITE()		freopen("output", "w", stdout)
#define FiO	ios_base::sync_with_stdio(false); \
				cin.tie(NULL);
#define ui unsigned int
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool checkDigit(ui n, ui k)
{
	while (n)
	{
		if ((n % 10) == k)
			return true;
		n /= 10;
	}
	return false;
}

bool checkDiv(ui n, ui k)
{
	if (checkDigit(n, k))
		return true;
	ui len = n / k;
	for (ui i = 1; i <= len; i++)
	{
		if (checkDigit(n - (i * k), k))
			return true;
		else if ((n - (i * k)) % k == 0)
			return true;
	}
	return false;
}

int main()
{


	FiO;
	ui t;
	cin >> t;
	while (t--)
	{
		ui n, k;
		cin >> n >> k;
		ui ar[n];
		for (int i = 0; i < n; i++)
			cin >> ar[i];
		for (int i = 0; i < n; i++)
		{
			if (ar[i] < k)
			{
				cout << "NO" << endl;
			}
			else if (ar[i] % k == 0)
			{
				cout << "YES" << endl;
			}
			else if (checkDiv(ar[i], k))
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}


	return 0;
}