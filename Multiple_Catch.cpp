
#include <iostream>
using namespace std;

int main() {
    try {
        throw 10.5;
    }
    catch (int x) { cout << "Integer"; }
    catch (double x) { cout << "Double"; }
    catch (...) { cout << "Unknown"; }
}

