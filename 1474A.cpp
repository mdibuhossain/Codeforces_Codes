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
		ui n; cin >> n;
		string s1, s2 = "";
		cin >> s1;
		int one = 0, zero = 0;
		bool flag = false;
		for (int i = 0; i < s1.size(); i++)
		{
			if (s1[i] == '1')
			{
				++one;
				zero = 0;
				flag = false;
				if (one & 1)
				{
					s2 += '1';
				}
				else
				{
					s2 += '0';
					flag = true;
				}
			}
			else if (s1[i] == '0')
			{
				++zero;
				one = 0;
				if (zero & 1)
				{
					if (flag)
					{
						s2 += '0';
					}
					else
					{
						s2 += '1';
					}
				}
				else
				{
					if (flag)
					{
						s2 += '1';
					}
					else
					{
						s2 += '0';
					}
				}
			}
		}
		cout << s2 << endl;
	}


	return 0;
}