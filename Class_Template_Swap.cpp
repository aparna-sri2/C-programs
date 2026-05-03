#include <iostream>
using namespace std;

template <class T>
class Swap {
public:
    T a, b;
    Swap(T x, T y) { a = x; b = y; }
    void swapValues() {
        T temp = a;
        a = b;
        b = temp;
    }
    void display() { cout << a << " " << b << endl; }
};

int main() {
    Swap<int> s(10, 20);
    s.swapValues();
    s.display();
}