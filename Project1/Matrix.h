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
	
};


