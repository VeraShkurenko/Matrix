//#include "Matrix.h"
//#include <iostream>
//using namespace std;
//
//
//Matrix::Matrix()
//{
//	ptr = nullptr;
//	str = st = 0;
//}
//Matrix::Matrix(int _str, int _st)
//{
//	str = _str;
//	st = _st;
//	ptr = new int* [str];
//
//	for (int i = 0; i < str; i++)
//	{
//		ptr[i] = new int[st] {0};
//	}
//
//}
//void Matrix:: Input()
//{
//	for (int i = 0; i < str; i++)
//	{
//		for (int j = 0; j < st; j++)
//		{
//			ptr[i][j] = rand() % 100;
//		}
//	}
//}
//Matrix::Matrix(const Matrix& obj)
//{
//
//	cout << "Copy construct" << endl << endl;
//	str = obj.str;
//	st = obj.st;
//
//	ptr = new int* [obj.str];
//
//	for (int i = 0; i < obj.str; i++)
//	{
//		ptr[i] = new int[st];
//
//		for (int j = 0; j < obj.st; j++)
//		{
//			ptr[i][j] = obj.ptr[i][j];
//		}
//
//
//	}
//
//
//}
//void Matrix::Print()const
//{
//	for (int i = 0; i < str; i++)
//	{
//		for (int j = 0; j < st; j++)
//		{
//			cout << ptr[i][j] << "\t";
//		}
//		cout << endl << endl;
//	}
//}
//Matrix::~Matrix()
//{
//	for (int i = 0; i < str; i++)
//	{
//		delete[]ptr[i];
//	}
//	delete[] ptr;
//	cout << "Destructor\n";
//}
//
//Matrix Matrix::Add(const Matrix& other) const
//{
//	Matrix result(str, st);
//	for (int i = 0; i < str; i++)
//	{
//		for (int j = 0; j < st; j++)
//		{
//			result.ptr[i][j] = ptr[i][j] + other.ptr[i][j];
//		}
//	}
//	return result;
//}
//
//Matrix Matrix::Multiply(const Matrix& other) const
//{
//	Matrix result(str, other.st);
//	for (int i = 0; i < str; i++)
//	{
//		for (int j = 0; j < other.st; j++)
//		{
//			result.ptr[i][j] = 0;
//			for (int k = 0; k < st; k++)
//			{
//				result.ptr[i][j] += ptr[i][k] * other.ptr[k][j];
//			}
//		}
//	}
//	return result;
//}
//
//Matrix Matrix::Transpose() const
//{
//	Matrix result(st, str);
//	for (int i = 0; i < str; i++)
//	{
//		for (int j = 0; j < st; j++)
//		{
//			result.ptr[j][i] = ptr[i][j];
//		}
//	}
//	return result;
//}
//
//int Matrix::GetElement(int row, int col) const
//{
//	return ptr[row][col];
//}
//
//void Matrix::SetElement(int row, int col, int value)
//{
//	ptr[row][col] = value;
//}
//
//
