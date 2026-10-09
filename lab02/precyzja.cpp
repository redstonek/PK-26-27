#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int p;
    cout << "Wybierz precyzję:" << endl << "[1] pojedyncza precyzja" << endl;
    cout << fixed << setprecision(12);
    cout << "[2] podwójna precyzja" << endl << "Wybór: ";
    cin >> p;
    if (p == 1) {
        float a, b;
        cout << "Podaj a: ";
        cin >> a;
        cout << endl;
        cout << "Podaj b: ";
        cin >> b;
        cout << endl;
        cout << "Suma: " << a + b << endl;
        cout << "Różnica:: " << a - b << endl;
        cout << "Iloczyn: " << a * b << endl;
        cout << "Iloraz: " << a / b << endl;
    }
    else if (p == 2) {
        double a, b;
        cout << "Podaj a: ";
        cin >> a;
        cout << endl;
        cout << "Podaj b: ";
        cin >> b;
        cout << endl;
        cout << "Suma: " << a + b << endl;
        cout << "Różnica:: " << a - b << endl;
        cout << "Iloczyn: " << a * b << endl;
        cout << "Iloraz: " << a / b << endl;
    }
    else{
        cout << "Niepoprawny wybór";
    }
    return 0;

}


