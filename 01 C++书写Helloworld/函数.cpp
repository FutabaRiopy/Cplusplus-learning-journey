#include<iostream>
bool judge(int num)
{
	int a = 0;
	int b = 0;
	int c = 0;
	a = num / 100;
	b = num / 10 % 10;
	c = num % 10;
	if (a * a * a + b * b * b + c * c * c == num)
	{
		return true;
	}
	else
	{
		return false;
	}
}
using namespace std;
int main()
{
cout << "请输入一个三位数字：" << endl;
int d ;
cin >> d;
if (judge(d))
{
	cout << d << " 为水仙花数" << endl;
}
else
{
	cout << d << "不是水仙花数" << endl;
}
}