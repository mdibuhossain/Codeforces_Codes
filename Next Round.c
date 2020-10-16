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
    int n, k, count = 0, count_ = 0;
    int *ptr;
    scanf("%d%d", &n, &k);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        if (ptr[i] > 0)
            count_++;
    }
    // 10 9 8 7 7 7 5 5
    for (int i = k; i < n; i++)
    {
        if ((ptr[k - 1] == ptr[i]) && ptr[i] > 0)
        {
            count++;
        }
    }
    if (count_ == 0)
        printf("0\n");
    else if (count_ >= k)
        printf("%d\n", k + count);
    else if (count_ < k)
        printf("%d\n", count_ + count);
    free(ptr);
    return 0;
}