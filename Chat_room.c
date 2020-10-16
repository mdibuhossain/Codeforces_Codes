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
int main()
{
    char s[200];
    gets(s);
    int i, flag = 0;
    for (i = 0; i <= strlen(s); i++)
    {
        if (s[i] == 'h')
        {
            for (i = i + 1; i <= strlen(s); i++)
            {
                if (s[i] == 'e')
                {
                    for (i = i + 1; i <= strlen(s); i++)
                    {
                        if (s[i] == 'l')
                        {
                            for (i = i + 1; i <= strlen(s); i++)
                            {
                                if (s[i] == 'l')
                                {
                                    for (i = i + 1; i <= strlen(s); i++)
                                    {
                                        if (s[i] == 'o')
                                        {
                                            flag = 1;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}