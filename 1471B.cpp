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

	//--------------------------MAIN_CODE-------------------------

	FiO;
	ui t;
	cin >> t;
	while (t--)
	{
		ui n, x;
		cin >> n >> x;
		vector<ui> cont, cont_tmp;
		ll sum_1 = 0, sum_2 = 0;
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			ui inp;
			cin >> inp;
			sum_1 += inp;
			if (inp % x)
			{
				flag = true;
			}
			else if (!flag && !(inp % x))
			{
				cont.push_back(inp / x);
				sum_2 += cont.back() * x;
			}
		}
		ll pw = x * x;
		while (!flag)
		{
			for (ll i = 0; i < cont.size(); i++)
			{
				if (!(cont[i] % x))
				{
					cont_tmp.push_back(cont[i] / x);
					sum_2 += cont_tmp.back() * pw;
				}
				else
				{
					flag = true;
					break;
				}
			}
			pw *= x;
			cont.clear();
			cont = cont_tmp;
			cont_tmp.clear();
		}
		cout << sum_1 + sum_2 << endl;
	}

	//--------------------------FINISHED--------------------------
	return 0;
}