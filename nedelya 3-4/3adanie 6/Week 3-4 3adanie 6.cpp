
//4. Вывести на экран ряд натуральных чисел от Н до М с шагом Ш.Например, если Н = 10, М = 35, Ш = 5, то вывод должен быть таким : 10 15 20 25 30 35. Значения Н, М, Ш указываются пользователем(считываются с клавиатуры или из файла).

#include <iostream>

int main()
{
    float Num1, Num2; int Shag;
    std::cout << "Enter 2 Numbers and shag\n";
    std::cin >> Num1 >> Num2 >> Shag;

    for (Num1; Num1 <= Num2; Num1 += Shag)
    {

        std::cout << Num1 << "\n";
    }
}