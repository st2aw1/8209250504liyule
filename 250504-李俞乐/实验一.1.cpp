#include<iostream>
using namespace std;
int main()
{
//	int i=k+1;//k变量未定义; 
	int k=1; 
	int i = k + 1;
	cout << i++ << endl;
//	int i=1;//i局部变量已定义，不能在同一函数内再次定义; 
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++"<<endl;
	return 0;
}
