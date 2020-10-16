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
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("I hate it\n");
    }
    else if (n == 2)
    {
        printf("I hate that I love it\n");
    }
    else if (n % 2 == 0)
    {
        printf("I hate that ");
        for (int i = 0; i < (n / 2) - 1; i++)
        {
            printf("I love that I hate that ");
        }
        printf("I love it\n");
    }
    else if (n % 2 != 0)
    {
        for (int i = 0; i < (n / 2); i++)
        {
            printf("I hate that I love that ");
        }
        printf("I hate it\n");
    }
    return 0;
}