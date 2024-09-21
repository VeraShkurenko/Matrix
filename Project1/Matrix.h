#pragma once
class Matrix
{
	int** ptr;
	int str; // ������
	int st; //�������
public:
	// ����������� �����������
	// ��������� � ��������� ������������� �������� �������(������ ����� �������).
	Matrix();
	Matrix(int _str, int _st);
	Matrix(const Matrix& obj);
	void Input();
	void Print()const;
	~Matrix();

	Matrix Add(const Matrix& other) const; 
	Matrix Multiply(const Matrix& other) const;
	Matrix Transpose() const; 
	int GetElement(int row, int col) const; 
	void SetElement(int row, int col, int value); 
	
};


