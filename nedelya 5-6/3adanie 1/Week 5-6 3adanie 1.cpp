//   y = 2 * | x + 6 | -x^2, åñëè x < 5

#include <iostream>

int main()
{
    float x;
    std::cin >> x;

    if (x > 5)
        std::cout << 2 * (x * x) + 10;
    else if (x == 0)

        std::cout << 0 * x;
    else if (x < 5)
        std::cout << 2 * fabs(x + 6) - (x * x);


}