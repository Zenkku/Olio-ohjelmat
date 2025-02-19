#include "student.h"



Student::Student(string Name, int Age)
{
    cout << "Oppillaan nimi" << Name << "ika" << Age << endl;
}

int Student::getAge() const
{
    return Age;
}

void Student::setAge(int newAge)
{
    Age = newAge;
}

string Student::getName() const
{
    return Name;
}

void Student::setName(const string &newName)
{
    Name = newName;
}

void Student::printStudentinfo()
{
    cout << "Nimi: " << Name << ", Ikä: " << Age << endl;
}
