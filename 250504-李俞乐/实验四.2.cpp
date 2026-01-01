#include<iostream> 
using namespace std;
int main() 
{
	double a[105];
	for(int i=1;i<=10;i++) scanf("%lf",&a[i]) ;
	for(int i=1;i<=10;i++)
	{
		for(int j=10;j>i;j--) if(a[j-1]>a[j]) swap(a[j],a[j-1]);
	}
	for(int i=1;i<=10;i++) printf("%lf ",a[i]) ;
	return 0;
}
