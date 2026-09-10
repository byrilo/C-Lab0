#include "Task3_Functions.h"
#include <iostream>

using namespace std;

double GetPower(double base, int exponent)
{
    // TODO: возвести base в степень exponent. Учтите отрицательные exponent
    // только если хотите - в примерах методички exponent всегда положительный.
    return 0.0;
}

void Task3_DemoGetPowerDirect()
{
    // TODO: несколько раз вызвать GetPower() для разных base/exponent
    // и вывести результат в формате "2.0 ^ 5 = 32".
}

void DemoGetPower(double base, int exponent)
{
    // TODO: вызвать GetPower(base, exponent) и вывести
    // "base ^ exponent = result" в консоль.
}

void Task3_CallDemoGetPower()
{
    // TODO: несколько раз вызвать DemoGetPower() с разными аргументами.
}

void RoundToTens(int& value)
{
    // TODO: округлить value до десятков (см. подсказку про value % 10 на стр. 9).
}

void Task3_DemoRoundToTens()
{
    // TODO: создать int a = ...; вывести исходное значение,
    // вызвать RoundToTens(a), вывести новое значение. Повторить для нескольких a.
}
