#include<bits/stdc++.h> 
using namespace std;
int dfs(int d)
{
	if(d==10) return 1;
	else return 2*dfs(d+1)+2; 
}
int main()
{
	cout<<dfs(1);
	return 0;
}
