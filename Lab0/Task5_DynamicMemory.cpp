#include "Task5_DynamicMemory.h"
#include "Common.h"
#include <iostream>

using namespace std;

void Task5_DoubleArray()
{
    // TODO: double* array = new double[8]; заполнить значениями из кода,
    // вывести (PrintDoubleArray), delete[] array;
}

void Task5_BoolArray()
{
    // TODO: bool* array = new bool[8]; заполнить значениями из кода,
    // вывести (PrintBoolArray), delete[] array;
}

void Task5_CharArrayFromInput()
{
    // TODO: запросить n (cin >> n), char* array = new char[n];
    // заполнить с клавиатуры в цикле, вывести, delete[] array;
}

void Task5_SortDynamicArray()
{
    // TODO: double* array = new double[10]; заполнить значениями из кода,
    // вывести исходный, SortDoubleArray(array, 10), вывести отсортированный,
    // delete[] array;
}

void Task5_SearchInDynamicArray()
{
    // TODO: int* array = new int[10]; заполнить значениями из кода,
    // запросить searchingValue, FindIndex(array, 10, searchingValue),
    // вывести исходный массив и найденный индекс, delete[] array;
}

void Task5_CountLettersInDynamicArray()
{
    // TODO: char* array = new char[15]; заполнить значениями из кода,
    // CountLetters(array, 15), вывести исходный массив и количество букв,
    // delete[] array;
}

int* MakeRandomArray(int arraySize)
{
    // TODO: int* array = new int[arraySize];
    // заполнить случайными числами 0-100 (см. <cstdlib>, rand() % 101),
    // вернуть array (без delete - память отдаётся вызывающему коду!).
    return nullptr;
}

void Task5_DemoRandomArrays()
{
    // TODO: вызвать MakeRandomArray(5), MakeRandomArray(8), MakeRandomArray(13),
    // вывести каждый с заголовком "Random array of N:", не забыть delete[] для каждого.
}

int* ReadArray(int count)
{
    // TODO: переписать пример со стр. 20 - выделить массив, считать count
    // значений с клавиатуры (cin), вернуть указатель.
    return nullptr;
}

int CountPositiveValues(int* values, int count)
{
    // TODO: переписать пример со стр. 20 - посчитать количество значений > 0.
    return 0;
}

void Task5_FixMemoryLeak()
{
    // TODO: переписать main() со стр. 20, но исправить утечку памяти:
    // прежде чем перезаписать values вторым вызовом ReadArray(),
    // не забудьте delete[] первый массив.
}
