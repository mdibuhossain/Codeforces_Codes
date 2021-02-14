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
    ui n;
    cin >> n;
    vi vv(n);
    for (int i = 0; i < n; i++)
        cin >> vv[i];
    int s = 0, d = 0;
    for (int i = 0; vv.size(); i++)
    {
        if (vv.front() > vv.back())
        {
            if (i & 1)
            {
                d += vv.front();
                vv.erase(vv.begin() + 0);
            }
            else
            {
                s += vv.front();
                vv.erase(vv.begin() + 0);
            }
        }
        else
        {
            if (i & 1)
            {
                d += vv.back();
                vv.pop_back();
            }
            else
            {
                s += vv.back();
                vv.pop_back();
            }
        }
    }
    cout << s << " " << d << endl;

    //--------------------------FINISHED--------------------------
    return 0;
}