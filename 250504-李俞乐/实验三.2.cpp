#include<iostream>
using namespace std;
const int N=1e6+5;
bool vis[N];
int prime[N];
bool is_prime(int num) 
{
	return !vis[num];
}
int main()
{
	int cnt=0;
	for(int i=2;i<=N;i++)
	{
		if(!vis[i]) prime[++cnt]=i;
		for(int j=1;prime[j]<N/i;j++)
		{
			if(!vis[prime[j]*i]) vis[prime[j]*i]=1;
			if(i%prime[j]==0) break;
		}
	}
//	for(int i=1;i<=10;i++) cout<<prime[i]<<endl;
	int num=0;
	for(int i=2;i<=N;i++)
	{
		if(num==200) break;
		if(is_prime(i))
		{
			num++;
			printf("%d ",i);
			if(num%10==0) printf("\n");
		}
	}
	return 0;
}
