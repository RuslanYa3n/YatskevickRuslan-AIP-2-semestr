//12. Описать функцию IsPower5(K) логического типа, возвращающую TRUE, если целый

#include <iostream>

bool IsPower5(int K) {
    int i = K;
    if (K > 0) {
        while ((i != 1) && (i % 5 == 0))
        {
            i = i / 5;
        }
        return true;
    }
    else return false;
}

int main()
{
    int K1, K2, K3, K4, K5, K6, K7, K8, K9, K10;
    std::cout << "Enter 10 numbers" << "\n";
    std::cin >> K1, K2, K3, K4, K5, K6, K7, K8, K9, K10;
    for ();
        IsPower5(K);
}