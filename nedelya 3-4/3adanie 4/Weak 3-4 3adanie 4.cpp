
//Пользователь задаёт число Ч и Х. Посчитать y:
//y=x-2*x+3*x-4*x+...+Chislo*x;

#include <iostream>

int main()
{
    float x, y = 0, Num;
    std::cout << "Enter Number i X\n";
    std::cin >> Num >> x;
    for (int i = 1; i <= Num; i = i + 2)
    {
        y = y + i * x;
    }
    for (int i = 2; i <= Num; i = i + 2)
    {
        y = y - i * x;
    }

    std::cout << y;
}
