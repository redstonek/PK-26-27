#include <iostream>

using namespace std;

int main() {
    char a;
    cout << "Podaj znak: ";
    cin >> a;
    cout << endl << "'" << a << "'";
    cout << endl;
    cout << "Kod: " << int(a) << " (" << showbase << hex << int(a) << ")" << endl;
    return 0;

}