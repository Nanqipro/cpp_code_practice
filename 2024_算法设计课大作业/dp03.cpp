// 区间dp
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define min(a,b) (a) < (b) ? (a) : (b);
const int maxn = 310;
int dp[maxn][maxn];
int s[maxn];//存前缀和 

int main()
{
	memset(dp,0,sizeof(dp));
	int n;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("%d",&s[i]);
		s[i] += s[i-1];
	}
	//先枚举长度，再枚举左端点
	for(int len = 2; len <= n; len++)//给出区间长度，合并至少是两堆 
	{
		for(int i = 1; i + len - 1 <= n; i++)//枚举 i
		{
			int j = i + len - 1;
			dp[i][j] = 1e8;
			for(int k = i; k < j; k++)
				dp[i][j] = min(dp[i][j],dp[i][k] + dp[k+1][j] + s[j] - s[i - 1]);
				//注意这里是减去s[i-1]而不是s[i] 
		}  
	}
	printf("%d\n",dp[1][n]);
	
	return 0;
}
