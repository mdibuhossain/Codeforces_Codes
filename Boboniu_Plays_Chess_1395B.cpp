#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 	int n, m, x, y, j = 1, flag = 1;
 	cin >> n >> m >> x >> y;
 	int row[101] = {0}, col[101] = {0};
 	row[x]++, col[y]++;
 	printf("%d %d\n", x, y);
 	printf("%d %d\n", 1, y);
 	row[1]++;
 	for (int i = 1; i <= n; ++i)
 	{
 		for(int k = 1; k <= m; k++)
 		{
 			if(j > m)
 			{
 				printf("%d %d\n", i, m);
 				j = m-1;
 				flag = 0;
 			}
 			else if(flag == 0)
 			{
 				if(j >= 1)
 				{
	 				if(!(row[i] && col[j]))
	 					printf("%d %d\n", i, j);
	 				j--; 					
 				}
 				else if(j == 0)
 				{
 					printf("%d %d\n", i, 1);
 					j = 2;
 					flag = 1;
 				}
 			}	
 			else if(j <= m)
 			{
 				if(!(row[i] && col[j]))
 					printf("%d %d\n", i, j);
 				j++;
 			}
 		}
 	}
    return 0;
}