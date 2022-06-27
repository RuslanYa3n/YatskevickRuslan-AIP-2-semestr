//  Конвертер велечин(паскаль, бар, фунт на квадратный дюйм)

#include <iostream>

int main()
{
    int I;
    float x;
    std::cout << "Направление перевода" << "\n" << "1-Паскаль в бар" << "\n" << "2-Паскаль в фунт" << "\n" << "3-Бар в паскаль" << "\n" << "4-Бар в фунт" << "\n" << "5-фунт в паскаль" << "\n" << "6-Фунт в бар" << std::endl;
    std::cin >> I;
    std::cout << "Направление перевода" << std::endl;
    std::cin >> x;
    if (I == 1) {
        x = x * 0.00001;
        std::cout << x << " Bar";
    };
    if (I == 2) {
        x = x * 0.000145;
        std::cout << x << " Funt na kvadratniy duym";
    };
    if (I == 3) {
        x = x * 100000;
        std::cout << x << " Paskal";
    };
    if (I == 4) {
        x = x * 14.5;
        std::cout << x << " Funt na kvadratniy duym";
    };
    if (I == 5) {
        x = x * 6894.76;
        std::cout << x << " Paskal";
    };
    if (I == 6) {
        x = x * 0.069;
        std::cout << x << " Bar";
    };



