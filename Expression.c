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
typedef unsigned int ui;
int cmp(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
int main()
{
    ui ar[5], a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    ar[0] = a + b * c;
    ar[1] = a * (b + c);
    ar[2] = a * b * c;
    ar[3] = (a + b) * c;
    ar[4] = a + b + c;
    qsort(ar, 5, sizeof(ui), cmp);
    printf("%d\n", ar[0]);
    return 0;
}