#include "Task6_LinearSearch.h"
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

void Task6_FindPersonByLastName()
{
    Person** people = CreatePeopleArray();
    for (int i = 0; i < PeopleCount; i++)
    {
        WritePerson(people[i]);
    }

    string lastName;
    cout << "Enter last name: ";
    cin >> lastName;
    int foundIndex = -1;

    // TODO: реализовать линейный поиск - пройтись циклом по people[0..PeopleCount-1]
    // и сравнить people[i]->LastName с lastName. При совпадении записать i в foundIndex
    // и прекратить поиск (break).

    if (foundIndex == -1)
    {
        cout << "Could not find a person by last name: " << lastName << endl;
    }
    else
    {
        cout << "A person's last name "
             << lastName
             << " was found. Its index in the array is "
             << foundIndex
             << endl;
    }

    ClearPeople(people, PeopleCount);
}
