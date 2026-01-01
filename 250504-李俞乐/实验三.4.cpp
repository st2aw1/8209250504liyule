#include<bits/stdc++.h> 
#include"mytriangle.cpp" 
using namespace std;
int main()
{
	double s1,s2,s3; 
	cin>>s1>>s2>>s3;
	if(!is_valid(s1,s2,s3)) cout<<"Not triangle";
	else cout<<"triangle's area is "<<_area(s1,s2,s3) ;
	return 0;
}
