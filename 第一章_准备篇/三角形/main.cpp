#include <cstdio>
#include <algorithm>
using namespace std;

int N = 0;
int DS[110] = {};

void init() 
{
	scanf("%d",&N);
	for(int i = 0;i < N-1;i++)
		scanf("%d,",&DS[i]);
	scanf("%d",&DS[N-1]);
}

int process()
{
	//1_先将原数组变成递增序列 
	sort(DS,DS+N);
	//2_依次选三个判断是否满足
	for(int i = 1;i <= N-2;i++)
	{
		int c = DS[N-i],b = DS[N-i-1],a = DS[N-i-2];
		if(a + b > c)
			return a+b+c;
	} 
	return 0;
}

int main()
{
	init();
	int ans = process();
	printf("%d",ans);
	return 0;
}
