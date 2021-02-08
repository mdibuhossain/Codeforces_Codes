#include <bits/stdc++.h>

//========================================
#define READ() freopen("input", "r", stdin)
#define WRITE() freopen("output", "w", stdout)
#define TIME() fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK() clock_t tStart = clock()
#define FiO                           \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
//========================================

//========================================
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vLL vector<ll>
#define vStr vector<string>
#define Mii map<int, int>
#define Msi map<string, int>
#define Mci map<c, int>
#define ll long long int
#define LL long long int
#define ui unsigned int
#define ull unsigned long long int
#define endl '\n'
#define Endl '\n'
#define ENDL '\n'
//========================================

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	CLOCK();
	READ();
	WRITE();
#endif

	//--------------------------MAIN_CODE-------------------------

	FiO;
	int t;
	cin >> t;
	while (t--)
	{
		ll a, heal;
		int n;
		cin >> a >> heal >> n;
		vector<pair<int, int>> monster(n);
		for (int i = 0; i < n; i++)
			cin >> monster[i].first;
		for (int i = 0; i < n; i++)
			cin >> monster[i].second;
		sort(monster.begin(), monster.end());
		for (int i = 0; i < n - 1; i++)
			heal -= ceil(1.0 * monster[i].second / a * 1.0) * monster[i].first;
		if (heal > 0)
		{
			int h = ceil(1.0 * monster[n - 1].second / a * 1.0);
			int m = ceil(1.0 * heal / monster[n - 1].first * 1.0);
			if (h > m)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}

	//--------------------------FINISHED--------------------------

#ifndef ONLINE_JUDGE
	TIME();
#endif
	return 0;
}