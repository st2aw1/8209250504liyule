#include<iostream> 
using namespace std;
int a[30];
int main()
{
	string s;
	cout<<"Enter a string :";
	getline(cin,s) ;
	for(int i=0;i<s.size();i++) 
	{
		if(s[i]-'a'>=0&&s[i]-'z'<=0) a[s[i]-'a']++;
		if(s[i]-'A'>=0&&s[i]-'Z'<=0) a[s[i]-'A']++;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]) cout<<(char) ('a'+i)<<":"<<a[i]<<" times"<<endl;
	}
	return 0;
}
/*
Welcome to New York!
*/ 
