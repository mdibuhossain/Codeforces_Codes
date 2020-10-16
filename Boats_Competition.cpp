/*
 ██▓ ▄▄▄▄    ██▀███   ▄▄▄       ██░ ██  ██▓ ███▄ ▄███▓
▓██▒▓█████▄ ▓██ ▒ ██▒▒████▄    ▓██░ ██▒▓██▒▓██▒▀█▀ ██▒
▒██▒▒██▒ ▄██▓██ ░▄█ ▒▒██  ▀█▄  ▒██▀▀██░▒██▒▓██    ▓██░
░██░▒██░█▀  ▒██▀▀█▄  ░██▄▄▄▄██ ░▓█ ░██ ░██░▒██    ▒██ 
░██░░▓█  ▀█▓░██▓ ▒██▒ ▓█   ▓██▒░▓█▒░██▓░██░▒██▒   ░██▒
░▓  ░▒▓███▀▒░ ▒▓ ░▒▓░ ▒▒   ▓▒█░ ▒ ░░▒░▒░▓  ░ ▒░   ░  ░
 ▒ ░▒░▒   ░   ░▒ ░ ▒░  ▒   ▒▒ ░ ▒ ░▒░ ░ ▒ ░░  ░      ░
 ▒ ░ ░    ░   ░░   ░   ░   ▒    ░  ░░ ░ ▒ ░░      ░   
 ░   ░         ░           ░  ░ ░  ░  ░ ░         ░   
          ░                                
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t; cin >> t;
	while(t--){
		int n, res = 0;
		cin >> n;
		int ar[n+1];
		for (int i = 1; i <= n; i++)
			cin >> ar[i];
		sort(ar+1, ar+n+1);
		for (int sm = 2; sm <= 100; sm++)
		{
			int count = 0;
			for (int i = 1, j = n; i < j;)
			{
				if(ar[i] + ar[j] > sm) j--;
				else if(ar[i] + ar[j] < sm) i++;
				else
				{
					i++;j--;
					count++;
				}
			}
			res = max(res, count);
		}
		cout << res << endl;
	}
	return 0;
}
