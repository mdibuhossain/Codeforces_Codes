#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int t, a, b;
        char c;
        cin >> t >> a >> b;
        for (int i = 0; i < t; i++)
        {
            c = 'a' + (i % b);
            cout << c;
        }
        cout << endl;
    }
    return 0;
}