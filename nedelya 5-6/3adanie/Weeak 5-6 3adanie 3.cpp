﻿// Напишите программу, которая принимает от пользователя координаты точки и определяет, попала ли точка в заштрихованную область.      
//y=x, y=-x, x^2+y^2=1

#include <iostream>

int main()
{
    float x, y;
    std::cin >> x >> y;
    if (((x * x + y * y < 1) && (((y > -x) && (y > x)) || ((y < x) && (y > -x)) || ((y < 0) && (y < x) && (y < -x)))) || ((y = x) && (y > -x)) || ((y = x) && (y > -x)) || ((y = -x) && (y < x)))
        std::cout << "Yes";
    else std::cout << "No";
}