#include<iostream>
#define pi 3.1415926535
using namespace std;
int main()
{
	int r, h;//r为半径,h为高度;
	cin >> r >> h;//输入半径r和高h;
	cout << r * r * pi * h / 3;//输出圆锥体积;
	return 0;
}
