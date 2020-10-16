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
#include <stdlib.h>
int comf(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int comf_rev(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, sum = 0;
        scanf("%d%d", &n, &k);
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        qsort(a, n, sizeof(int), comf);
        qsort(b, n, sizeof(int), comf_rev);
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", a[i]);
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", b[i]);
        // }
        if (k == 0)
        {
            for (int i = 0; i < n; i++)
                sum += a[i];
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                if (a[i] < b[i])
                {
                    a[i] = b[i];
                }
            }
            for (int i = 0; i < n; i++)
                sum += a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}