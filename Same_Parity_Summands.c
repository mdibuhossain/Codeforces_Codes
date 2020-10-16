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
        int n, k;
        scanf("%d%d", &n, &k);
        if (n % k == 0)
        {
            printf("YES\n");
            for (int i = 0; i < (k - 1); i++)
            {
                printf("%d ", (n / k));
            }
            printf("%d\n", (n / k));
        }
        else if (n < k)
        {
            printf("NO\n");
        }
        else if ((n & 1) == 1 && (k & 1) == 1 && (n % k) != 0) // if n == k == odd
        {
            // if ((n / k) == 1)
            // {
            //     int x = 0;
            //     printf("YES\n");
            //     for (int i = 0; i < (k - 1); i++)
            //     {
            //         printf("%d ", (n / k));
            //         x += (n / k);
            //     }
            //     printf("%d\n", (n - x));
            // }
            // else
            // {
            //     int x = 0;
            //     printf("YES\n");
            //     for (int i = 0; i < (k - 1); i++)
            //     {
            //         printf("%d ", (n / k) - 1);
            //         x += (n / k) - 1;
            //     }
            //     printf("%d\n", (n - x));
            // }
            int x = 0;
            printf("YES\n");
            for (int i = 0; i < (k - 1); i++)
            {
                printf("%d ", 1);
                x++;
            }
            printf("%d\n", (n - x));
        }
        else if (((n & 1) != 1 && (k & 1) != 1) && (n % k) != 0) // if n == k == even
        {
            printf("YES\n");
            int x = 0;
            for (int i = 0; i < (k - 1); i++)
            {
                printf("%d ", (n / k));
                x += (n / k);
            }
            printf("%d\n", (n - x));
        }
        else if (((n & 1) != 1 && (k & 1) == 1) && (n % k) != 0) // if n == even && k == odd
        {
            if ((n / k) % 2 != 0 && (n / k) > 1) // if (n/k) odd
            {
                printf("YES\n");
                int x = 0;
                for (int i = 0; i < (k - 1); i++)
                {
                    printf("%d ", (n / k) - 1);
                    x += (n / k) - 1;
                }
                printf("%d\n", (n - x));
            }
            else if ((n / k) % 2 == 0 && (n / k) > 1) // if (n/k) even
            {
                printf("YES\n");
                int x = 0;
                for (int i = 0; i < k - 1; i++)
                {
                    printf("%d ", (n / k));
                    x += (n / k);
                }
                printf("%d\n", (n - x));
            }
            else
                printf("NO\n");
        }
        else if ((n & 1) == 1 && (k & 1) != 1) // if n == odd && k == even
        {
            printf("NO\n");
        }
    }

    return 0;
}