#include<iostream>
#include "Matrix.h"
#include <ctime>
using namespace std;
//Создать класс для работы с матрицами.
//Предусмотреть, как минимум, функции для сложения матриц, умножения матриц, транспонирования матриц, присваивания матриц друг другу(конструктор копирования), установка и получение произвольного элемента матрицы(доступ через индексы).


int main()
{
    srand(time(0));

    Matrix<int> obj1(3, 3);
    obj1.Input();
    cout << "First matrix (int):\n";
    obj1.Print();

    Matrix<double> obj2(3, 3);
    obj2.Input();
    cout << "Second matrix (double):\n";
    obj2.Print();

    Matrix<int> sum = obj1.Add(obj1);
    cout << "Sum of matrices (int):\n";
    sum.Print();

    Matrix<double> product = obj2.Multiply(obj2);
    cout << "Product of matrices (double):\n";
    product.Print();

    Matrix<int> transpose = obj1.Transpose();
    cout << "Transpose of the first matrix (int):\n";
    transpose.Print();

    obj1.SetElement(0, 0, 999);
    cout << "Updated first matrix after setting element at (0, 0) to 999 (int):\n";
    obj1.Print();
    cout << "Element at (0, 0): " << obj1.GetElement(0, 0) << endl;

    return 0;

}