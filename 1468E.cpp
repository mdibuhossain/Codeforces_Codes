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
        ui len[4] = {0};
        for (int i = 0; i < 4; i++)
            cin >> len[i];
        sort(len, len + 4);
        cout << len[0] * len[2] << endl;
    }

    //--------------------------FINISHED--------------------------
    return 0;
}