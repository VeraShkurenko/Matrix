#pragma once
#include <iostream>
using namespace std;

template <class T>
class Matrix
{
	T** ptr;
	int str; // строки
	int st; //столбцы
public:
	// конструктор копирования
	// установка и получение произвольного элемента матрицы(доступ через индексы).
	Matrix();
	Matrix(int _str, int _st);
	Matrix(const Matrix& obj);
	void Input();
	void Print()const;
	~Matrix();

	Matrix Add(const Matrix& other) const; 
	Matrix Multiply(const Matrix& other) const;
	Matrix Transpose() const; 
	T GetElement(int row, int col) const; 
	void SetElement(int row, int col, T value); 
	
};

template <typename T>
Matrix<T>::Matrix() 
{
    ptr = nullptr;
    str = st = 0;
}

template <typename T>
Matrix<T>::Matrix(int _str, int _st)
{
    str = _str;
    st = _st;
    ptr = new T * [str];
    for (int i = 0; i < str; i++) 
    {
        ptr[i] = new T[st]{ 0 };
    }
}

template <typename T>
Matrix<T>::Matrix(const Matrix& obj) 
{
    cout << "Copy construct" << endl << endl;
    str = obj.str;
    st = obj.st;

    ptr = new T * [str];
    for (int i = 0; i < str; i++) 
    {
        ptr[i] = new T[st];
        for (int j = 0; j < st; j++) 
        {
            ptr[i][j] = obj.ptr[i][j];
        }
    }
}

template <typename T>
Matrix<T>::~Matrix() {
    for (int i = 0; i < str; i++) 
    {
        delete[] ptr[i];
    }
    delete[] ptr;
    cout << "Destructor\n";
}

template <typename T>
void Matrix<T>::Input() 
{
    for (int i = 0; i < str; i++) 
    {
        for (int j = 0; j < st; j++) 
        {
            ptr[i][j] = rand() % 100;
        }
    }
}

template <typename T>
void Matrix<T>::Print() const 
{
    for (int i = 0; i < str; i++) 
    {
        for (int j = 0; j < st; j++) 
        {
            cout << ptr[i][j] << "\t";
        }
        cout << endl << endl;
    }
}

template <typename T>
Matrix<T> Matrix<T>::Add(const Matrix& other) const 
{
    Matrix<T> result(str, st);
    for (int i = 0; i < str; i++) 
    {
        for (int j = 0; j < st; j++)
        {
            result.ptr[i][j] = ptr[i][j] + other.ptr[i][j];
        }
    }
    return result;
}

template <typename T>
Matrix<T> Matrix<T>::Multiply(const Matrix& other) const
{
    Matrix<T> result(str, other.st);
    for (int i = 0; i < str; i++) 
    {
        for (int j = 0; j < other.st; j++) 
        {
            result.ptr[i][j] = 0;
            for (int k = 0; k < st; k++) {
                result.ptr[i][j] += ptr[i][k] * other.ptr[k][j];
            }
        }
    }
    return result;
}

template <typename T>
Matrix<T> Matrix<T>::Transpose() const 
{
    Matrix<T> result(st, str);
    for (int i = 0; i < str; i++) 
    {
        for (int j = 0; j < st; j++) 
        {
            result.ptr[j][i] = ptr[i][j];
        }
    }
    return result;
}

template <typename T>
T Matrix<T>::GetElement(int row, int col) const
{
    return ptr[row][col];
}

template <typename T>
void Matrix<T>::SetElement(int row, int col, T value) 
{
    ptr[row][col] = value;
}
