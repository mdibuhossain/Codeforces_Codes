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
    int k = 0, temp;
    int len = strlen(s);
    int len2 = (len / 2) + 1;
    int s1[len2];
    for (int i = 0; i < len; i++)
    {
        if (s[i] != '+')
        {
            s1[k] = s[i];
            k++;
            continue;
        }
    }
    for (int i = 0; i < len2 - 1; i++)
    {
        for (int j = 0; j < len2 - i; j++)
        {
            if (s1[j] > s1[j + 1])
            {
                temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }
    int i;
    for (i = 0; i < len2 - 1; i++)
    {
        printf("%c+", s1[i]);
    }
    printf("%c\n", s1[i]);
    return 0;
}