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
 	int n, x1 = 0, x2 = 0;
 	cin >> n;
 	string s1, s2;
 	cin >> s1;
 	x1 = 1;
 	n -= 1;
 	while(n--)
 	{
 		string ss;
 	    cin >> ss;
 	    if(ss == s1)
 	    	x1++;
 	    else
 	    {
 	    	s2 = ss;
 	    	x2++;
 	    }
 	}
 	if (x1 > x2)
 		cout << s1 << endl;
 	else
 		cout << s2 << endl;
    return 0;
}