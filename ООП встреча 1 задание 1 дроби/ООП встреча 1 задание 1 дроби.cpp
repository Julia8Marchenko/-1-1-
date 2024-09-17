// ООП встреча 1 задание 1 дроби.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

// объявление классов
class Complex /*имя класса*/
{
private:
    /* список свойств и методов для использования внутри класса */
    int real{}; // Действительная часть комплексного числа
    int imag{};  // Мнимая часть комплексного числа    

public:
    /* список методов доступных другим функциям и объектам программы */    
    
    void print() {        
        std::cout << "(" << this->real << " + i" << this->imag << ")" << std::endl;
    }

    void setReal(int v) {
        real = v;
    }

    void setImag(int v) {
        imag = v;
    }
    //Сумма комплексного числа
    Complex Sum(Complex b) {
        Complex z;
        std::cout << "\nСумма комплексного числа: " << std::endl;
        z.real = this->real + b.real;
        z.imag = this->imag + b.imag;
        return z;
    }
    //Частного двух комплексных чисел
    Complex Chact(Complex b) {
        Complex z;
        std::cout << "\nЧастного двух комплексных чисел: " << std::endl;
        z.real = (real * b.real + imag * b.imag) /
            (b.real * b.real + b.imag * b.imag);
        z.imag = (imag * b.real - b.imag * real) /
            (b.real * b.real + b.imag * b.imag);
        return z;
    }

    //Разность комплексного числа
    Complex Razn(Complex b)    
    {
        Complex z;
        std::cout << "\nРазность комплексного числа: " << std::endl;
        z.real = real - b.real;
        z.imag = imag - b.imag;
        return z;
    }

    //Операция произведения
    Complex Proiztrex(Complex b) 
    {
        Complex z;
        std::cout << "\nОперация произведения: " << std::endl;
        z.real = (real * b.real) - (imag * b.imag);
        z.imag = (imag * b.real) + (b.imag * real);
        return z;
    }  
};


int main()
{
    setlocale(LC_ALL, "RU");

    std::cout << "Задача." << std::endl;
    std::cout << "Реализуйте класс Дробь*.Необходимо хранить числитель" << std::endl;
    std::cout << "и знаменатель в качестве переменных - членов.Реализуйте" << std::endl;
    std::cout << "функции - члены для ввода данных в переменные - члены," << std::endl;
    std::cout << "для выполнения арифметических операций(сложение," << std::endl;
    std::cout << "вычитание, умножение, деление, и т.д.)" << std::endl;
    std::cout << "*ЗАМЕНА на КОМПЛЕКСНОЕ ЧИСЛО" << std::endl;
    
    std::cout << std::endl;

    std::cout << "Комплексное число А: ";
    Complex c1; // Complex();
    c1.setReal(50);
    c1.setImag(30);    
    c1.print();
    
    std::cout << "Комплексное число B: ";
    Complex c2;
    c2.setReal(10);
    c2.setImag(40);
    c2.print();

    Complex c3 = c1.Sum(c2);
    c3.print();

    Complex c4 = c1.Chact(c2);
    c4.print();

    Complex c5 = c1.Razn(c2);
    c5.print();

    Complex c6 = c1.Proiztrex(c2);
    c6.print();

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
