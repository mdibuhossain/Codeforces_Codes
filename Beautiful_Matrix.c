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
    int ar[5][5], i, j, row = 0, col = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &ar[i][j]);
            if (ar[i][j] == 1)
            {
                row = i;
                col = j+1;
            }
        }
    }
    if (row + 1 >= 3)
    {
        row = (row + 1) - 3;
    }
    else if (row + 1 < 3)
    {
        row = 3 - (row + 1);
    }
    if (col >= 3)
    {
        col = col - 3;
    }
    else if (col < 3)
    {
        col = 3 - col;
    }
    printf("%d\n", row + col);
    return 0;
}