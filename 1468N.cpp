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

    //--------------------------MAIN_CODE-------------------------

    FiO;
    ui t;
    cin >> t;
    while (t--)
    {
        int c1, c2, c3;
        int a, b, c, d, e;
        // ll sumContainer = 0, sumItems = 0;
        cin >> c1 >> c2 >> c3;
        cin >> a >> b >> c >> d >> e;
        if (a <= c1 && b <= c2 && c <= c3)
        {
            c1 -= a;
            c2 -= b;
            c3 -= c;
            // ll Ppaper = 0, Pplastic = 0;
            if (c1 >= d)
            {
                c1 -= d;
                d -= d;
            }
            else
            {
                d -= c1;
                c1 -= c1;
            }
            if (c2 >= e)
            {
                c2 -= e;
                e -= e;
            }
            else
            {
                e -= c2;
                c2 -= c2;
            }
            // cout << d << " " << e << " " << c3 << endl;
            if ((d + e) <= c3)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    //--------------------------FINISHED--------------------------

    return 0;
}