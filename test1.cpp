#include <stdio.h>

int main()
{
	int n, m, p;
	int a[n][m];
	int b[m][p];
	int tich[n][p];
	
	scanf("%d %d %d", &n, &m, &p);
 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
}
