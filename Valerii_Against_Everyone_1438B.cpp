#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	 int t;
	 cin >> t;
	 while(t--)
	 {
	 	int n, flag = 0;
	 	ll k;
	 	cin >> n;
	 	map<ll, int> mp;
	 	for (int i = 0; i < n; ++i)
	 	{
	 		cin >> k;
	 		mp[k]++;
	 		if(mp[k] > 1)
	 			flag = 1;	
	 	}
	 	if(flag) cout << "YES" << endl;
	 	else cout << "NO" << endl;
	 }
	return 0;
}