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
	long double n, x;
	ui t;
	cin >> n >> t;
	x = pow(1.000000011, t);
	x *= n;
	cout << fixed << setprecision(30) << x << endl;

	return 0;
}