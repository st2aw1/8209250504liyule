#include<bits/stdc++.h>
using namespace std;
int parseHex(const char *const hexString)
{
	int num=0;
	for(int i=0;i<strlen(hexString);i++)
	{
		num*=16;
		if(hexString[i]<='9') num+=hexString[i]-'0';
		else num+=hexString[i]-'A'+10;
	}
	return num;
}
int main()
{
	char s[105];
	cin.getline(s,105);
	cout<<parseHex(s);
	return 0;
}
