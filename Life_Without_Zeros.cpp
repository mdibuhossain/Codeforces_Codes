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
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a, b, sum1, sum2, _a, _b, _sum;
    string s_a, s_b, s_sum1;
    cin >> a >> b;
    sum1 = a + b;
    s_a = to_string(a);
    s_b = to_string(b);
    s_sum1 = to_string(sum1);
    s_a.erase(remove(s_a.begin(), s_a.end(), '0'), s_a.end());
    s_b.erase(remove(s_b.begin(), s_b.end(), '0'), s_b.end());
    s_sum1.erase(remove(s_sum1.begin(), s_sum1.end(), '0'), s_sum1.end());
    stringstream x1(s_a);
    x1 >> _a;
    stringstream x2(s_b);
    x2 >> _b;
    stringstream x3(s_sum1);
    x3 >> sum2;
    _sum = _a + _b;
    // cout << "a: " << a << " " << "b: " << b << " " << "SUm1: " << sum1 << endl;
    // cout << "s_a: " << s_a << " " << "s_B: " << s_b << " " << "s_sum1: " << s_sum1 << endl;
    // cout << "_a: " << _a << " " << "_b: " << _b << " " << "_sum: " << _sum << endl;
    if(_sum == sum2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}