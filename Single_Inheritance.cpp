

#include <iostream>
using namespace std;

class Person {
public:
    void show() { cout << "Person\n"; }
};

class Student : public Person {
public:
    void display() { cout << "Student\n"; }
};

int main() {
    Student s;
    s.show();
    s.display();
}
