//Протабулировать функцию (шаг и диапазон задаёт пользователь):
//y = sqrt(-(1 + 3x) / 2) + 3x;

#include <iostream>

int main()
{
    float Shag, DiapNachal, DiapKonec;
    std::cout << "Enter shag i diapazon\n";
    std::cin >> Shag >> DiapNachal >> DiapKonec;
    for (DiapNachal; DiapNachal <= DiapKonec; DiapNachal = DiapNachal + Shag)
    {
        float y, x;
        x = DiapNachal;
        y = -sqrt((1 + 3 * x) / 2) + 3 * x;
        std::cout << x << "\t" << y << "\n";
    }
}
