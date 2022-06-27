//7. Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг:

#include <iostream>

using namespace std;

void ShiftLeft3(float& A, float& B, float& C) {
    float z, x;
    z = A; A = B; B = C; C = z;
}
int main() {
    float A1, A2, B1, B2, C1, C2;
    std::cout << "Enter A1,B1,C1" << "\n";
    std::cin >> A1 >> B1 >> C1;
    std::cout << "Enter A2,B2,C2" << "\n";
    std::cin >> A2 >> B2 >> C2;
    ShiftLeft3(A1, B1, C1);
    ShiftLeft3(A2, B2, C2);
    std::cout << A1 << "\t" << B1 << "\t" << C1 << "\n";
    std::cout << A2 << "\t" << B2 << "\t" << C2 << "\n";

}