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
    getchar();
    char s[n + 1];
    gets(s);
    int A_count = 0, D_count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'A')
        {
            A_count++;
        }
        else
        {
            D_count++;
        }
    }
    if (A_count == D_count)
    {
        printf("Friendship\n");
    }
    else if (A_count > D_count)
    {
        printf("Anton\n");
    }
    else
    {
        printf("Danik\n");
    }
    return 0;
}