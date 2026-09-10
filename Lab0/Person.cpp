#include "Person.h"
#include <iostream>

using namespace std;

const int PeopleCount = 5;

void WritePerson(const Person& person)
{
    // TODO: вывести FirstName, LastName, Age в формате из методички
    // (стр. 23): "First Name: X; Last Name: Y; Age: Z".
}

Person** CreatePeopleArray()
{
    // TODO: выделить Person** people = new Person*[PeopleCount];
    // для каждого i - people[i] = new Person(); и заполнить поля
    // (используйте те же 5 человек, что в методичке, стр. 23-24,
    // либо своих - главное, чтобы было 5 разных записей).
    return nullptr;
}

void ClearPerson(Person* person)
{
    // TODO: delete person;
}

void ClearPeople(Person** people, int itemsCount)
{
    // TODO: в цикле вызвать ClearPerson для каждого элемента,
    // затем delete[] people;
}
