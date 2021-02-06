#include <iostream>
using namespace std;
#define ull unsigned long long int
#define endl '\n'
#define Endl '\n'
#define ENDL '\n'
int main()
{
    ull n, k;
    cin >> n >> k;
    if ((n / k) & 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}