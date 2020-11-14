#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			if(i == 0)
				cout << "1";
			else cout << " 1";
		}
		cout << endl;
	}
	return 0;
}