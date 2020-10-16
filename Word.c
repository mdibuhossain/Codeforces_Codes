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
    int len = strlen(s), upper_count = 0, lower_count = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] <= 90 && s[i] >= 65)
        {
            upper_count++;
        }
        else
        {
            lower_count++;
        }
    }
    if (upper_count > lower_count)
    {
        strupr(s);
        printf("%s\n", s);
    }
    else
    {
        strlwr(s);
        printf("%s\n", s);
    }
    return 0;
}