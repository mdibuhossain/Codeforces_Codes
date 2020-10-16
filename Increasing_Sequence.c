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
    int n, d, sub, f, k, l, m;
    long long count = 0;
    int *ptr;
    scanf("%d%d", &n, &d);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        if (i > 0)
        {
            if (ptr[i] <= ptr[i - 1])
            {
                sub = ptr[i - 1] - ptr[i];
                if (sub < d)
                {
                    ptr[i] += d;
                    count++;
                }
                else
                {
                    f = sub + d - 1;
                    // count += f / d;
                    // ptr[i] += f;
                    k = ptr[i] + sub;
                    l = sub / d + 1;
                    if (k == ptr[i - 1])
                    {
                        ptr[i] += f;
                        count += l;
                    }
                }
            }
        }
    }
    printf("%lld\n", count);
    free(ptr);
    return 0;
}