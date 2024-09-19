#pragma once
class Matrix
{
	int** ptr;
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
	
};


