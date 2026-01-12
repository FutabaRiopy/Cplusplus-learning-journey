#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 9,6,4,8,5 };
	cout << "ÅÅĞòÇ°£º";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int k = 0; k < 4; k++)
	{
		for (int j = 0; j< 5 - k - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;

			}
		}
	}
	cout << "ÅÅĞòºó£º";
	for (int s = 0; s < 5; s++)
	{
		cout << arr[s] << " ";
	}
	cout << endl;
}
