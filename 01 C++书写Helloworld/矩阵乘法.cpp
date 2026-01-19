#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int matrix1[3][3], matrix2[3][3];
	cout << "请输入矩阵1的元素（从左到右）：" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "matrix1[" << i + 1 << "][" << j + 1 << "]:";
			cin >> matrix1[i][j];
		}
	}
	cout << "请输入矩阵2的元素（从左到右）：" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "matrix2[" << i + 1 << "][" << j + 1 << "]:";
			cin >> matrix2[i][j];
		}
	}
	cout << "\n矩阵1:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (j < 2) {
				cout << matrix2[i][j] << ",";
			}
			if (j == 2) {
				cout << matrix2[i][j];
			}
		}
		cout << endl;
	}
	cout << "\n矩阵2:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (j < 2) {
				cout << matrix2[i][j] << ",";
			}
			if (j == 2) {
				cout << matrix2[i][j];
			}
		}
		cout << endl;
	}
	int matrix3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix3[i][j] = matrix1[i][0] * matrix2[0][j] + matrix1[i][1] * matrix2[1][j] + matrix1[i][2] * matrix2[2][j];
}
	}
	cout << "最终计算结果；" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (j < 2) {
				cout << matrix3[i][j] << ",";
			}
			if (j == 2) {
				cout << matrix3[i][j];
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}