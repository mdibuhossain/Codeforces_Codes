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
    int t, n, count_1, count_2, x;
    scanf("%d", &t);
    while (t--)
    {
        count_1 = count_2 = 0;
        scanf("%d", &x);
        while (x--)
        {
            scanf("%d", &n);
            if (n % 2 == 0)
            {
                count_1 = 1;
            }
            else
                count_2 = 1;
        }
        if (count_2 == count_1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}