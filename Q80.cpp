//
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    int empID;

    void setEmployee(int id) {
        empID = id;
    }

    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << empID << endl;
    }
};

int main() {
    Employee e;
    e.setPerson("John", 30);
    e.setEmployee(1001);
    e.displayEmployee();

    return 0;
}
