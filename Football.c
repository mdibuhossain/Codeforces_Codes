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
    char s[101];
    gets(s);
    int zero_count, one_count;
    zero_count = one_count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '0')
        {
            one_count = 0;
            zero_count++;
        }
        if (zero_count >= 7)
        {
            break;
        }
        if (s[i] == '1')
        {
            zero_count = 0;
            one_count++;
        }
        if (one_count >= 7)
        {
            break;
        }
    }
    if (zero_count >= 7 || one_count >= 7)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}