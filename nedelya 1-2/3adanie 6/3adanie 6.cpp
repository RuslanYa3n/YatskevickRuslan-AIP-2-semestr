// Сделать калькулятор. Формат ввода: Операция Ч1 Ч2

#include <iostream>

int main()
{
    float x1, x2;
    char Operation;
    std::cout << "Choose operation and 2 numbers" << std::endl;

    std::cin >> Operation >> x1 >> x2;
    if (Operation == '/') {
        std::cout << x1 / x2;
    }
    if (Operation == '*') {
        std::cout << x1 * x2;
    }
    if (Operation == '-') {
        std::cout << x1 - x2;
    }
    if (Operation == '+') {
        std::cout << x1 + x2;
    }



    switch (Operation)
    {
    case '+':
        std::cout << x1 + x2;
        break;
    case '-':
        std::cout << x1 - x2;
        break;
    case '*':
        std::cout << x1 * x2;
        break;
    case '/':
        std::cout << x1 / x2;
        break;
    }
}