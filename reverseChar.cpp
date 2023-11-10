#include <iostream>
using namespace std;

void reverse(char s[], int size) {

    char revS[size];
    
    for(int i = 0, j = size - 1; i < size; i++, j--) {

        revS[i] = s[j];
    }
    for(int i = 0; i < size; i++) {
        
        cout << revS[i];
    }
} 

int main() {

    int size;
    string s;
    
    cout << "Enter a string: ";
    cin >> s;
    size = s.length();  
    char* name = new char[size];

    for(int i = 0; i < size; i++) {
        *(name + i) = s.at(i);
    }

    reverse(name, size);

    delete[] name;
    
    return 0;

}