//#include<iostream>
//using namespace std;
//int main()
//{
//	int scores[5] = {65,93,84,72,93};
//	cout << "学号顺序录入的成绩为：";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << scores[i]<<" ";
//	}
//	cout << endl;
//	int* p[5];
//	for( int j=0;j<5;j++)
//	{
//		p[j] = &scores[j];
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5 - i - 1; j++)
//		{
//			if (scores[j] > scores[j + 1])
//			{
//				int* temp = p[j + 1];
//				p[j + 1] = p[j];
//				p[j] = temp;
//		}
//		}
//	}
//	cout << "按成绩排序的顺序为："  ;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << *p[i] << " ";
//	}
//	cout << endl;
//	cout << "排完序后的数组顺序：";
//		for (int i = 0; i < 5;i++)
//		{
//			cout << scores[i] << " ";
//		}
//	cout << endl;
//}