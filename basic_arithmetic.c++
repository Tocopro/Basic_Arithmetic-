#include <iostream>
using namespace std;

int main() {
    int a , b;
    int c;
    int d;
    cout << "Enter value of A: ";
    cin >> a;
    cout << "\nEnter value of B: ";
    cin >> b;
    c = a + b;
    d = a * b * c;
    cout << "The Value of A + B = " << c << endl;
    cout << "The Value of A + B x C = " << d << endl;
    return 0;
}

