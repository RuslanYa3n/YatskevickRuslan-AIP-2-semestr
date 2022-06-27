//Протабулировать функцию (шаг и диапазон задаёт пользователь)
//y=sqrt(5+4*x)+13*x+cos(12*x+91)
#include <iostream>
#include <cmath>

int main()
{
    float Shag, DiapNachal, DiapKonec;
    std::cout << "Enter shag i diapazon\n";
    std::cin >> Shag >> DiapNachal >> DiapKonec;
    for (DiapNachal; DiapNachal <= DiapKonec; DiapNachal = DiapNachal + Shag)
    {
        float y, x;
        x = DiapNachal;
        y = sqrt(5 + 4 * x) + 13 * x + cos(12 * x + 91);
        std::cout << x << "\t" << y << "\n";
    }
}