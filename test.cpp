#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
        cin >> vt[i];
    sort(vt.begin(), vt.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        vector<int>::iterator low;
        low = lower_bound(vt.begin(), vt.end(), x);
        int idx = low - vt.begin();
        if (vt[idx] == x)
            cout << "Yes " << idx + 1 << endl;
        else
            cout << "No " << idx + 1 << endl;
    }
}