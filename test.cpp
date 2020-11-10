#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    const char a[] = "ibrahim hossain akash";
    const char b[] = "hossain";
    char *x = strstr(a, b);
    printf("%s\n", x);
}