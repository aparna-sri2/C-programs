#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("data.txt");
    out << "Hello C++";
    out.close();

    ifstream in("data.txt");
    string s;
    getline(in, s);
    cout << s;
}
