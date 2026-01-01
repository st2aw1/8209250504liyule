#include<bits/stdc++.h> 
using namespace std;
int indexof(const char *s1,const char *s2)
{
	if(strlen(s1)<strlen(s2)) return -1;
	for(int i=0;i<strlen(s1);i++)
	{
		for(int j=0;j<strlen(s2);j++) 
		{
			if(s1[i+j]!=s2[j]) break;
			if(j==strlen(s2)-1) return i;
		}
	}
	return -1;
}
int main()
{
	char s1[105],s2[105];
	cin.getline(s1,105);
	cin.getline(s2,105);
	if(indexof(s1,s2)==-1) cout<<"Not found";
	else cout<<indexof(s1,s2);
	return 0;
}
