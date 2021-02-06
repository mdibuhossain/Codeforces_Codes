#include<bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define FiO	ios_base::sync_with_stdio(false); \
				cin.tie(NULL);
#define ui unsigned int
#define ll long long int
#define ull unsigned long long int
using namespace std;

ui FUN(ui n)
{
	ui x;
	ui mn = 1, cnt = 1;
	ui ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		if (i > 0 && ar[i] == ar[i - 1])
			cnt++;
		else
		{
			mn = max(mn, cnt);
			cnt = 1;
		}
	}
	return max(mn, cnt);
}

int main()
{
	FiO;
	ui t; cin >> t;
	while (t--)
	{
		ui n; cin >> n;
		cout << FUN(n) << endl;
	}
	return 0;
}