

#include <iostream>
using namespace std;

template <class T>
class Printer {
public:
    void print(T data) {
        cout << "Generic: " << data << endl;
    }
};

template <>
class Printer<char*> {
public:
    void print(char* data) {
        cout << "String: " << data << endl;
    }
};

int main() {
    Printer<int> p1;
    p1.print(10);

    Printer<char*> p2;
    p2.print("Hello");
}