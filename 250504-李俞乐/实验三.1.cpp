#include<iostream>
using namespace std;
int gcd(int n,int m)
{
	if(n%m==0) return m;
	else return gcd(m,n%m);
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m) ;
	cout<<gcd(n,m);
	return 0;
}
