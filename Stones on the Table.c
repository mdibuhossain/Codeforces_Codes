/***********************************************************************\
|                                                                       |
|      _____   ____    _____               _    _   _____   __  __      |
|     |_   _| |  _ \  |  __ \      /\     | |  | | |_   _| |  \/  |     |
|       | |   | |_) | | |__) |    /  \    | |__| |   | |   | \  / |     |
|       | |   |  _ <  |  _  /    / /\ \   |  __  |   | |   | |\/| |     |
|      _| |_  | |_) | | | \ \   / ____ \  | |  | |  _| |_  | |  | |     |
|     |_____| |____/  |_|  \_\ /_/    \_\ |_|  |_| |_____| |_|  |_|     |
|                                                                       |
|                                                                       |
|                   COMPUTER SCIENCE AND ENGINEERING                    |
|  Bangabandhu Sheikh Mujibur Rahman Science and Technology University  |
\***********************************************************************/
#include<stdio.h>
#include<string.h>             
int main()
{
    int n, len, count = 0;
    char s[50];
    scanf("%d",&n);
    scanf("%s",&s);
    len = strlen(s);
    for (int i = 0; i < len-1; i++)
    {
        if(s[i]==s[i+1])
            count++;
    }
    printf("%d\n",count);    
    return 0;
}
