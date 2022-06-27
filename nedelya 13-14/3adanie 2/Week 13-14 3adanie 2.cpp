//Вычислить сумму элементов массива:
//меньше 5, больше 6, меньше 4

#include <iostream>
#include <array>


void Summ() {
    int Summa5 = 0, Summa6 = 0, Summa4 = 0;
    std::array<int, 20> Summa;
    for (int i = 0; i < 20; i++) {
        Summa[i] = rand() % 15;
        if (Summa[i] < 5)
            Summa5 += Summa[i];
        if (Summa[i] > 6)
            Summa6 += Summa[i];
        if (Summa[i] < 4)
            Summa4 += Summa[i];
    }
    std::cout << "\nSumma <5  " << Summa5 << "\nSumma >6  " << Summa6 << "\nSumma <4  " << Summa4;
}


int main()
{
    Summ();
}