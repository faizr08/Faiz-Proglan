#include <iostream>
#include <string>
using namespace std;

int main(int argc, char ** argv) {
    string name;
    cout << "Enter your name please: " << endl;
    getline(cin, name);
    cout << "Halo, " << name << "!" << endl;

    return 0;
} 