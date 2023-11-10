#include <iostream>
using namespace std;

int main() {

    double variable = 2.4;
    double* pt = &variable;

    cout << "Variable value: " << variable << ";";
    cout << " address: " << pt <<endl;
    cout << "Pointer value: " << pt;
    cout << " address: " << &pt << ";";
    cout << " dereference: " << *pt;

    return 0;
}