#pragma once
#include <string>

// Структура Person и вспомогательные функции для работы с массивом людей -
// приведены в методичке дословно, раздел "Коллекция структур", стр. 22-24.
// Это инфраструктура для Задания 6, а не само задание - перепишите её
// как показано в методичке.

struct Person
{
    // TODO: std::string FirstName; std::string LastName; unsigned Age;
    // (см. стр. 22, не забудьте Doxygen-комментарии //! на каждое поле).
};

// Количество людей в массиве (см. стр. 23).
extern const int PeopleCount;

// Выводит в консоль данные о человеке (стр. 23).
void WritePerson(const Person& person);

// Создаёт массив из PeopleCount указателей на Person, заполненный данными
// прямо в коде (см. пример на стр. 23-24 - там же и берите значения).
Person** CreatePeopleArray();

// Освобождает память одного человека (стр. 24).
void ClearPerson(Person* person);

// Освобождает память всего массива людей (стр. 24).
void ClearPeople(Person** people, int itemsCount);
