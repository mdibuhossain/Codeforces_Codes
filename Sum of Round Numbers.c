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
        int n, count = 0, r, z;
        scanf("%d", &n);
        int x = n;
        while (n != 0)
        {
            r = n % 10;
            n /= 10;
            if (r > 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
        for (int i = 0; x != 0; i++)
        {
            z = x % 10;
            x /= 10;
            if (z > 0)
            {
                int y = pow(10, i);
                printf("%d ", (z)*y);
            }
        }
        printf("\n");
    }
    return 0;
}