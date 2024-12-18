// 01背包
#include <stdio.h>
#include <iostream>
#include <string.h>
#define max(a, b) (a) > (b) ? (a) : (b);
const int maxn = 1010;
using namespace std;
int dp[maxn][maxn];
int w[maxn], v[maxn];//存物品的价值、体积

int main()
{
	memset(dp, 0 ,sizeof(dp));
	int n, m;//n为物品数量的，m为背包质量
	scanf("%d %d",&n, &m);
	for(int i = 1; i <= n; i++)
		scanf("%d %d",&v[i], &w[i]);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			dp[i][j] = dp[i-1][j];//左半边子集
			if(j >= v[i])//右半边子集不一定存在，需要进行判断
				dp[i][j] = max(dp[i][j], dp[i-1][j-v[i]] + w[i]);
		}
	}
	printf("%d\n",dp[n][m]);

	return 0;
}
