#include<iostream> 
using namespace std;
int main()
{
	bool vis[105] ;
	for(int i=1;i<=100;i++)  vis[i]=0;
	for(int i=1;i<=100;i++) 
	{
		for(int j=i;j<=100;j+=i) vis[j]^=1;
	}
	for(int i=1;i<=100;i++)  if(vis[i]) printf("%d ",i);
	return 0;
}
