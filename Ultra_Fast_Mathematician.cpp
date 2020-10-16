/***********************************************************************\
|      _____   ____    _____               _    _   _____   __  __      |
|     |_   _| |  _ \  |  __ \      /\     | |  | | |_   _| |  \/  |     |
|       | |   | |_) | | |__) |    /  \    | |__| |   | |   | \  / |     |
|       | |   |  _ <  |  _  /    / /\ \   |  __  |   | |   | |\/| |     |
|      _| |_  | |_) | | | \ \   / ____ \  | |  | |  _| |_  | |  | |     |
|     |_____| |____/  |_|  \_\ /_/    \_\ |_|  |_| |_____| |_|  |_|     |
|                                                                       |
|                   COMPUTER SCIENCE AND ENGINEERING                    |
|  Bangabandhu Sheikh Mujibur Rahman Science and Technology University  |
\***********************************************************************/
#include <iostream>
using namespace std;
char bin(char a, char b)
{
    if (a == b)
    {
        return '0';
    }
    else
    {
        return '1';
    }
}
int main()
{
    int i = 0;
    // string a, b, out;
    char a[101], b[101], out[101];
    cin >> a >> b;
    while (a[i] != '\0')
    {
        out[i] = bin(a[i], b[i]);
        i++;
    }
    out[i] = '\0';
    cout << out << endl;
    return 0;
}