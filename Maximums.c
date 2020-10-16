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
int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}
int main()
{
    int n, x;
    int *ptr_b;
    scanf("%d", &n);
    ptr_b = (int *)malloc(n * sizeof(int));
    x = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr_b[i]);
        ptr_b[i] += x;
        x = max(x, ptr_b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr_b[i]);
    }    
    return 0;
}