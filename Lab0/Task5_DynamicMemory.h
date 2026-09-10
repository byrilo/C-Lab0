#pragma once

// Задание 5 (раздел "Динамическая память", методичка стр. 18-20).
// Общая идея всех подпунктов: new -> использовать -> delete[]/delete.
// Где явно указано "переиспользуйте функцию" - используйте готовые функции
// из Common.h, а не копируйте их логику заново (методичка сама просит
// передать динамический массив в "ранее написанную функцию").

void Task5_DoubleArray();        // 5.1 массив double через new, вывод, delete[]
void Task5_BoolArray();          // 5.2 массив bool через new, вывод, delete[]
void Task5_CharArrayFromInput(); // 5.3 ввод n, массив char через new, ввод с клавиатуры, delete[]

// 5.4 Массив из 10 double через new, вывод исходного, сортировка через
//     SortDoubleArray() из Common.h, вывод отсортированного, delete[].
void Task5_SortDynamicArray();

// 5.5 Массив из 10 int через new, поиск индекса через FindIndex() из Common.h.
void Task5_SearchInDynamicArray();

// 5.6 Массив из 15 char через new, подсчёт букв через CountLetters() из Common.h.
void Task5_CountLettersInDynamicArray();

// 5.7 Выделяет массив int размером arraySize и заполняет случайными числами 0-100.
int* MakeRandomArray(int arraySize);
void Task5_DemoRandomArrays(); // вызвать MakeRandomArray для 5, 8, 13, вывести, delete[] каждый

// 5.8 В методичке дан пример с УТЕЧКОЙ памяти (стр. 20) - второй вызов ReadArray()
// затирает единственный указатель на память, выделенную первым вызовом,
// и она никогда не освобождается. Перепишите пример и исправьте утечку
// (подсказка: не теряйте указатель на первый массив, прежде чем удалить его).
int* ReadArray(int count);
int CountPositiveValues(int* values, int count);
void Task5_FixMemoryLeak();
