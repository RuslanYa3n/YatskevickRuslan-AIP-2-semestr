//3.Пользователь вводит два числа. Необходимо поменять значения переменных так, чтобы значение первой оказалось во второй, а второй в первой.

#include <iostream>
int main() {
    float Num1, Num2;
    std::cout << "Enter two numbers\n";
    std::cin >> Num1 >> Num2;
    std::swap(Num1, Num2);
    std::cout << "Num1: " << Num1 << "\t" << "Num2: " << Num2;
    std::getchar();
}