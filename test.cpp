#include <bits/stdc++.h>

//========================================
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
	ui T;
	cin >> T;
	while (T--)
	{
		ui a, b, k;
		cin >> a >> b >> k;
		ui xx = k - 1;
		int res = 0;
		vi v_a(k), v_b(k);
		for (int i = 0; i < k; i++)
			cin >> v_a[i];
		for (int i = 0; i < k; i++)
			cin >> v_b[i];
		for (int i = 0; i < k; i++)
		{
			int cnt = 0;
			for (int j = i + 1; j < k; j++)
			{
				if (v_a[i] == v_a[j] || v_b[i] == v_b[j])
				{
					cnt++;
				}
			}
			res += xx - cnt;
			--xx;
		}
		cout << res << endl;
	}

	//--------------------------FINISHED--------------------------

	return 0;
}