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
int main()
{
    int friend_num, loop = 0;
    cin >> friend_num;
    int normal_ar[friend_num + 1], mod_ar[friend_num + 1];
    for (loop = 0; loop < friend_num; loop++)
    {
        cin >> normal_ar[loop];
        mod_ar[normal_ar[loop]] = loop + 1;
    }
    for (loop = 1; loop < friend_num; loop++)
    {
        cout << mod_ar[loop] << " ";
    }
    cout << mod_ar[loop] << endl;
    return 0;
}