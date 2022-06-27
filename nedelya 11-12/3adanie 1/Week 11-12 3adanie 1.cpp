//1. Создайте структуру, которая хранит время: часы, минуты, секунды
//b. Написать функцию, которая сравнивает два времени. Возвращает true, если
//первый аргумент больше второго.

#include <iostream>
#include <array>

struct Time {
    int hours; int minutes; int seconds;
};

Time times[2];

int main()
{
    times[1].hours = 1 + rand() % 60;
    times[2].hours = 1 + rand() % 60;
    times[1].minutes = 1 + rand() % 60;
    times[2].minutes = 1 + rand() % 60;
    times[1].seconds = 1 + rand() % 60;
    times[2].seconds = 1 + rand() % 60;
    if (times[1].hours > times[2].hours)
        return true;
    if (times[1].hours < times[2].hours)
        return false;

}
