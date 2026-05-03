
#include <iostream>
using namespace std;

int main() {
    int balance = 1000, withdraw;
    cin >> withdraw;

    try {
        if (withdraw > balance)
            throw "Insufficient Balance";
        cout << "Withdrawn";
    }
    catch (const char* msg) {
        cout << msg;
    }
}