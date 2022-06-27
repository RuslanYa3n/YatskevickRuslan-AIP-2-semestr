// Посчитать количество положительных/отрицательных элементов массива

#include <iostream>
#include <array>

using namespace std;

void Elements() {
    int Pol = 0, Otric = 0;
    array<int, 25>Element;
    for (int i = 0; i < 25; i++)
    {
        Element[i] = rand() % 50 - 25;
        if (Element[i] >= 0)
            Pol++;
        else Otric++;
        cout << Element[i] << "\n";
    }
    cout << "Polojit: " << Pol << "\nOtricat: " << Otric;
}

int main()
{
    Elements();
}
