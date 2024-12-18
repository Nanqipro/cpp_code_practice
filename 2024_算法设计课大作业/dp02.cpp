// 完全背包
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define max(a,b) (a) > (b) ? (a) : (b);
const int maxn = 1010;
int dp[maxn][maxn], v[maxn], w[maxn];

int main()
{
	memset(dp,0,sizeof(dp));
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++)
		scanf("%d %d", &v[i], &w[i]);
	/*
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			dp[i][j] = dp[i-1][j];
			if(j >= v[i])
				dp[i][j] = max(dp[i-1][j], dp[i][j-v[i]] + w[i]);
		}
	}
	*/
	for(int i = 1; i <= n; i++)
	{
		for(int j = v[i]; j <= m; j++)
		{
			dp[i][j] = max(dp[i-1][j], dp[i][j-v[i]] + w[i]);
		}
	}
	printf("%d\n",dp[n][m]);
	
	return 0;
}
