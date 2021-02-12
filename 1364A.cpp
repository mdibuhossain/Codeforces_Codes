#include <bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define TIME() fprintf(stderr, "Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK() clock_t tStart = clock()
#define READ() freopen("input", "r", stdin)
#define WRITE() freopen("output", "w", stdout)
#define FiO                           \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
#define ui unsigned int
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{

	FiO;
	ui t;
	cin >> t;
	while (t--)
	{
		int sum = 0, cnt1 = 0;
		ui n, x;
		cin >> n >> x;
		ui test[n];
		for (int i = 0; i < n; i++)
		{
			cin >> test[i];
			sum += test[i];
			if (test[i] % x == 0)
				cnt1++;
		}
		if (sum % x != 0)
			cout << n << endl;
		else if (cnt1 == n)
			cout << "-1" << endl;
		else
		{
			int m1 = n, m2 = n, s1 = sum, s2 = sum;
			for (int i = 0; i < n; i++)
			{
				if (s2 % x != 0)
					break;
				else
					m2--;
				s2 -= test[i];
			}
			for (int i = n - 1; i >= 0; i--)
			{
				if (s1 % x != 0)
					break;
				else
					m1--;
				s1 -= test[i];
			}
			// cout << m1 << " " << m2 << endl;
			if (m1 == 0 && m2 == 0)
				cout << "-1" << endl;
			else if (m1 >= m2)
				cout << m1 << endl;
			else
				cout << m2 << endl;
		}
	}

	return 0;
}