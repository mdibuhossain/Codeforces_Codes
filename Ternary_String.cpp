#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        int x = 200000;
        char st[x + 1];
        char ch;
        n = p = 0;
        scanf("%s", &st);
        for (int i = 1; i < strlen(st); i++)
        {
            if (n == 3)
            {
                break;
            }

            if (st[i] != st[i - 1])
            {
                if (st[i] == ch)
                {
                    p = 0;
                    n = 2;
                    p += 2;
                }
                ch = st[i - 1];
                // ++p;
                p += 2;
                if (n == 0)
                {
                    n += 2;
                }
                else
                {
                    n++;
                }
            }

            if (p > 0 && (st[i] == st[i - 1]))
            {
                ++p;
                if (n == 1)
                {
                    n++;
                }
            }
        }
        // p = p + 1;
        if (n < 3)
            p = 0;
        cout << p << endl;
    }
}