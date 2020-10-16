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
    scanf("%d", &t);
    while (t--)
    {
        int a1, a2, b1, b2, max1, max2, min1, min2;
        scanf("%d%d%d%d", &a1, &b1, &a2, &b2);
        (a1 > b1) ? (max1 = a1, min1 = b1) : (max1 = b1, min1 = a1);
        (a2 > b2) ? (max2 = a2, min2 = b2) : (max2 = b2, min2 = a2);
        if (max1 == max2)
        {
            if ((min1 + min2) == max1)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    return 0;
}