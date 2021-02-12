#include <bits/stdc++.h>

//========================================
#define READ() freopen("input", "r", stdin)
#define WRITE() freopen("output", "w", stdout)
#define TIME() fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK() clock_t tStart = clock()
#define FiO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
//========================================

//========================================
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vLL vector<ll>
#define vStr vector<string>
#define Mii map<int, int>
#define Msi map<string, int>
#define Mci map<c, int>
#define ll long long int
#define LL long long int
#define ui unsigned int
#define ull unsigned long long int
#define endl '\n'
#define Endl '\n'
#define ENDL '\n'
//========================================

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    CLOCK();
    READ();
    WRITE();
#endif

    //--------------------------MAIN_CODE-------------------------

    FiO;
    ui t;
    cin >> t;
    while (t--)
    {
        ui n;
        cin >> n;
        bool flag = true;
        if (n >= 2020)
        {
            if (!(n % 2020) || !(n % 2021))
                cout << "YES" << endl;
            else
            {
                int sum = 0;
                for (int i = 1; i <= (n / 2020); i++)
                {
                    sum = i * 2020;
                    int xx = n - sum;
                    if (!(xx % 2021))
                    {
                        cout << "YES" << endl;
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
            cout << "NO" << endl;
    }

    //--------------------------FINISHED--------------------------

#ifndef ONLINE_JUDGE
    TIME();
#endif
    return 0;
}