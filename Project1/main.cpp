#include<iostream>
#include "Matrix.h"
#include <ctime>
using namespace std;
//������� ����� ��� ������ � ���������.
//�������������, ��� �������, ������� ��� �������� ������, ��������� ������, ���������������� ������, ������������ ������ ���� �����(����������� �����������), ��������� � ��������� ������������� �������� �������(������ ����� �������).




int main()
{

	srand(time(0));

	Matrix obj1(3, 5);
	obj1.Input();
	obj1.Print();

	Matrix obj2(5, 10);
	obj2.Input();
	obj2.Print();

	Matrix obj3 = obj2;
	obj3.Print();





}