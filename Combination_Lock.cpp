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
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 	int n, sum = 0;
 	cin >> n;
 	char a1[n+1], a2[n+1];
 	for (int i = 0; i < n; ++i)
 		cin >> a1[i];
 	for (int i = 0; i < n; ++i)
 	{
 		int x, y;
 		cin >> a2[i];
 		if (a2[i] > a1[i])
 			x = ((a1[i] - '0') - 0)+ 1 + (9 - (a2[i] - '0'));
 		else
 			x = ((a2[i] - '0') - 0) + 1 + (9 - (a1[i] - '0'));
 		y = abs((a1[i] - '0') - (a2[i] - '0'));
 		sum += min(x, y);
 	}
 	cout << sum << endl;
    return 0;
}