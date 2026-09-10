#pragma once

// Задание 3 (раздел "Функции", методичка стр. 9).

// 3.1 Возводит base в степень exponent (см. пример IsNegative/WriteTotalCost на стр. 7-8
//     как образец оформления функции с возвращаемым значением).
double GetPower(double base, int exponent);

// Демонстрация первой части задания: несколько вызовов GetPower() прямо в main()
// (или в этой функции - как вам удобнее), с выводом "base ^ exponent = result".
void Task3_DemoGetPowerDirect();

// 3.2 Обёртка над GetPower(): сама вызывает GetPower и печатает результат
//     в формате "base ^ exponent = result". Смысл - вынести работу с консолью
//     в отдельную функцию и не дублировать её в main() (см. абзац про
//     дублирование кода на стр. 8).
void DemoGetPower(double base, int exponent);
void Task3_CallDemoGetPower(); // несколько вызовов DemoGetPower() из main()

// 3.3 Округляет value до десятков, передавая его по ссылке (изменяет исходную
//     переменную). Подсказка по методу округления - на стр. 9 методички.
void RoundToTens(int& value);
void Task3_DemoRoundToTens(); // создать int a, вывести, вызвать RoundToTens(a), вывести снова
