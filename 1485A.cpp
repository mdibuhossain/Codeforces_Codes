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
        int a, b, mn = 1e9 + 5;
        cin >> a >> b;
        int count = 1;
        for (ui i = 1; i <= 40; i++)
        {
            int aa = a, bb = b, cnt = 1;
            bool flag = false;
            while (aa >= bb)
            {
                if (i == 1 && !flag && a > b && b != 1)
                {
                    count = 0;
                    flag = true;
                }
                else if (!flag)
                {
                    bb += count;
                    cnt += count;
                    flag = true;
                }
                if (flag && (aa >= bb))
                {
                    aa = aa / bb;
                    cnt++;
                }
            }
            mn = min(cnt, mn);
            count++;
        }
        cout << mn << endl;
    }

    //--------------------------FINISHED--------------------------

    return 0;
}