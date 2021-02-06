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

int main()
{


	FiO;
	ui t;
	cin >> t;
	while (t--)
	{
		ui n, k;
		cin >> n >> k;
		if (k == 1)
			cout << "1" << endl;
		else if (n <= k)
		{
			cout << (k / n) + ((k % n) ? 1 : 0) << endl;
		}
		else
		{
			ui x = n / k;
			ui kk = k * x;
			while (n > kk)
			{
				kk = k * x++;
			}
			cout << (kk / n) + ((kk % n) ? 1 : 0) << endl;
		}
	}

	return 0;
}