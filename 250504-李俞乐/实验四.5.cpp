#include<iostream> 
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(s1.size()>s2.size()) cout<<-1<<endl;
	else
	{
		int rt=-1;
		for(int i=0;i<=s2.size()-s1.size();i++)
		{
			for(int j=0;j<s1.size();j++)
			{
				if(s1[j]!=s2[i+j]) break;
				if(j==s1.size()-1) rt=i;
			}
		}
		cout<<rt<<endl;
	}
	return 0;
}
/*
welcome
We welcome to you
*/
