#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    // Method- 1:
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n, mex_a = 0, mex_b = 0;
    //     cin >> n;
    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //         cin >> a[i];
    //     sort(a, a + n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (mex_a == a[i])
    //             mex_a++;
    //         else if (mex_b == a[i])
    //             mex_b++;
    //     }
    //     cout << mex_a + mex_b << endl;
    // }

    // Method- 2:
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n, sum = 0;
    //     cin >> n;
    //     int a[101] = {0};
    //     for (int i = 0; i < n; i++)
    //     {
    //         int k;
    //         cin >> k;
    //         a[k]++;
    //     }
    //     for (int i = 1; i < 101; i++)
    //     {
    //         if (a[i] <= 1 && a[0] > 0)
    //             sum += a[i];
    //     }
    //     cout << a[0] << endl;
    //     // cout << sum + a[0] << endl;
    // }
    return 0;
}