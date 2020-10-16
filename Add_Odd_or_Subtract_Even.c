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
    int a, b, t, count, x;
    scanf("%d", &t);
    while (t--)
    {
        count = 0;
        scanf("%d%d", &a, &b);
        if (a < b)
        {
            x = b - a;
            if (x % 2 == 0) // if even
            {
                // a = b - a + 1;
                count = 2;
            }
            else // if odd
                count = 1;
        }
        else if (a > b)
        {
            // a = a - b;
            x = a - b;
            // count++;
            if (x % 2 == 0) // if even
            {
                count = 1;
            }
            else // if odd
            {
                count = 2;
            }
            // if (a < b)
            // {
            //     count = count + (b - a);
            // }
        }
        printf("%d\n", count);
    }
    return 0;
}