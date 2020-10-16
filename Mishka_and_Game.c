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
    int t, a, b, count_a = 0, count_b = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &a, &b);
        if (a >= b)
        {
            if (a == b)
            {
                continue;
            }
            else
            {
                count_a++;
            }
        }
        else
        {
            count_b++;
        }
    }
    if (count_a == count_b)
    {
        printf("Friendship is magic!^^\n");
    }
    else if (count_a > count_b)
    {
        printf("Mishka\n");
    }
    else
    {
        printf("Chris\n");
    }
    return 0;
}