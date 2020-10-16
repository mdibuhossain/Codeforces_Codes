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
    int t, n, count, j;
    int *ptr;
    scanf("%d", &t);
    while (t--)
    {
        count = 0;
        scanf("%d", &n);
        ptr = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                if (ptr[i] == ptr[j])
                    break;
            }
            if (i == j)
            {
                count++;
            }
        }
        printf("%d\n", count);
        free(ptr);
    }
    return 0;
}