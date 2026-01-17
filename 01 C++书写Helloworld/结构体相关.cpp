# include<iostream>
using namespace std;
#include<string>
struct hero
{
	string name;
	int age;
	string sex;
};
void bubbleSort(hero * arr, int len)//定义排序函数，参数为结构体数组地址和数组长度
{
	for (int i=0; i < len - 1; i++)
	{
		for (int j=0; j < len - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
}
	for (int i = 0; i < len; i++)
	{
		cout << "name:" << arr[i].name << endl;
		cout << "age:" << arr[i].age << endl;
		cout << "sex:" << arr[i].sex << endl;
}
}
int main()
{
	struct hero array[5] = { {"刘备",23,"male"},{"关羽",22,"male"},{"张飞",20,"male"},{"赵云",21,"male"},{"貂蝉",19,"female"} };
	bubbleSort(array, sizeof(array) / sizeof(array[0]));
}