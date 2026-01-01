#include<iostream>
using namespace std;
int main()
{
	int a[1005];
	bool vis[1005];
	for(int i=1;i<=10;i++) scanf("%d",&a[i]);
	for(int i=1;i<=10;i++)
	{
		vis[i]=1;
		for(int j=1;j<i;j++) if(a[i]==a[j]) vis[i]=0;
	}
	for(int i=1;i<=10;i++) if(vis[i]) cout<<a[i]<<" ";
	return 0;
}
