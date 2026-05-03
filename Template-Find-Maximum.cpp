
#include <iostream>
using namespace std;

template <class T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << findMax(10, 20) << endl;
    cout << findMax(5.5, 2.3) << endl;
    return 0;
}