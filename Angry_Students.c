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
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    int n;
    int count_p;
    int count_a;
    scanf("%d", &t);
    while (t--)
    {
        count_a = 0;
        count_p = 0;
        scanf("%d", &n);
        char s[n + 1];
        getchar();
        gets(s);
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'P')
                count_p++;
            else
            {
                count_a = 1;
                break;
            }
        }
        (count_a == 1 && count_p > 0) ? printf("%d\n", count_p) : printf("0\n");
    }
    return 0;
}