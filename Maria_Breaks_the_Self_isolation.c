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
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, flag = 0;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        qsort(ar, n, sizeof(int), comp);
        for (int i = n - 1; i >= 0; i--)
        {
            if (ar[i] <= i + 1)
            {
                printf("%d\n", i + 2);
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if (flag)
            printf("1\n");
    }
    return 0;
}