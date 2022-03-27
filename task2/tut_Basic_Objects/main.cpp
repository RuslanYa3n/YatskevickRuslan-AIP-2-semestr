#include <iostream>
#include <cmath>

int main()
{
    float x, y;
    std::cin >> x >> y;
    if (((x * x + y * y < 1) && (((y > -x) && (y > x)) || ((y < x) && (y > -x)) || ((y < 0) && (y < x) && (y < -x)))) || ((y = x) && (y > -x)) || ((y = x) && (y > -x)) || ((y = -x) && (y < x)))
        std::cout << "Yes";
    else std::cout << "No";
}
