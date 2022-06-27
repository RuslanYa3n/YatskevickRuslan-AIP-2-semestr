//7. Найти среднее арифметическое положительных и отрицательных

#include <iostream>
#include <array>

using namespace std;

void Elements() {
    int Poloj = 0, Otricat = 0, SummPoloj = 0, SummOtricat = 0;
    float SrOtricat = 0, SrPoloj = 0;
    array<int, 35>Elem;
    for (int i = 0; i < 35; i++)
    {
        Elem[i] = rand() % 50 - 25;
        if (Elem[i] >= 0)
        {
            Poloj++;
            SummPoloj += Elem[i];
        }
        else {
            Otricat++;
            SummOtricat += Elem[i];
        }
        cout << Elem[i] << "\n";
    }
    SrOtricat = (1.0 * SummOtricat) / Otricat; SrPoloj = (1.0 * SummPoloj) / Poloj;
    cout << "Polojit: " << Poloj << "\nSred Polojit: " << SrPoloj << "\nOtricat: " << Otricat << "\nSred Otricat: " << SrOtricat;
}

int main()
{
    Elements();
}