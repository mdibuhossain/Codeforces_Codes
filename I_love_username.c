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
typedef unsigned int ui;
int main()
{
    ui n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("0\n");
    }
    else
    {
        ui ar[n], c = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        ui min, x;
        min = x = ar[0];
        for (int i = 1; i < n; i++)
        {
            if (ar[i] < min)
            {
                c++;
                min = ar[i];
            }
            if (ar[i] > x)
            {
                c++;
                x = ar[i];
            }
        }
        printf("%d\n", c);
    }

    return 0;
}