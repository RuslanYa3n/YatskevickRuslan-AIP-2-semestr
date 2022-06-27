//14. Создать новый массив из двух других массивов путём операций над элементами массивов вычитания

#include <iostream>
#include <array>

using namespace std;

void Massiv() {
	array<int, 5>Massiv1;
	array<int, 5>Massiv2;
	array<int, 5>MassivKonec;
	for (int i = 0; i < 5; i++) {
		Massiv1[i] = rand() % 35;
		Massiv2[i] = rand() % 15;
		MassivKonec[i] = Massiv1[i] - Massiv2[i];
		cout << "Num1: " << Massiv1[i] << ";  Num2: " << Massiv2[i] << ";  NumKonec: " << MassivKonec[i] << endl;
	}

}



int main()
{
	Massiv();
}
