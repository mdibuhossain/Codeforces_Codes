/*
 ██▓ ▄▄▄▄    ██▀███   ▄▄▄       ██░ ██  ██▓ ███▄ ▄███▓
▓██▒▓█████▄ ▓██ ▒ ██▒▒████▄    ▓██░ ██▒▓██▒▓██▒▀█▀ ██▒
▒██▒▒██▒ ▄██▓██ ░▄█ ▒▒██  ▀█▄  ▒██▀▀██░▒██▒▓██    ▓██░
░██░▒██░█▀  ▒██▀▀█▄  ░██▄▄▄▄██ ░▓█ ░██ ░██░▒██    ▒██ 
░██░░▓█  ▀█▓░██▓ ▒██▒ ▓█   ▓██▒░▓█▒░██▓░██░▒██▒   ░██▒
░▓  ░▒▓███▀▒░ ▒▓ ░▒▓░ ▒▒   ▓▒█░ ▒ ░░▒░▒░▓  ░ ▒░   ░  ░
 ▒ ░▒░▒   ░   ░▒ ░ ▒░  ▒   ▒▒ ░ ▒ ░▒░ ░ ▒ ░░  ░      ░
 ▒ ░ ░    ░   ░░   ░   ░   ▒    ░  ░░ ░ ▒ ░░      ░   
 ░   ░         ░           ░  ░ ░  ░  ░ ░         ░   
          ░                                        
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define tt int t; cin >> t; while(t--)
int main()
{
    tt
    {
        int n; cin >> n;
        vector<int> vt;
        for (int i = 0; i < n; i++)
        {
            int k; cin >> k;
            vt.push_back(k);
        }
        sort(vt.begin(), vt.end());
        for (int i = 0; i < vt.size()-1; i++)
        {
            if (abs(vt[i+1] - vt[i]) <= 1)
            {
                vt.erase(vt.begin()+i);
                i -= 1;
            }            
        }
        if(vt.size() ==1) cout << "YES" << endl;
        else cout << "NO" << endl;        
    }
    return 0;
}