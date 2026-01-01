#include<iostream> 
using namespace std;
const int N=1e3+5; 
int main()
{
	int  a[N],b[N],n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	scanf("%d",&m) ;
	for(int i=1;i<=m;i++) scanf("%d",&b[i]);
	int l=1,r=1;
//	a[n+1]=b[m+1]=0x3f3f3f3f;
	while(l<=n||r<=m)
	{
		if(a[l]<b[r]||r>m) printf("%d ",a[l]),l++;
		else if(a[l]>=b[r]||l>n) printf("%d ",b[r]),r++;
	}
	return 0;
}
/*
5 1 5 16 61 111
4 2 4 5 6
*/
