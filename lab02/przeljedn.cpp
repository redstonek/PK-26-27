#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int s;
    float k, f, c;
    cout << "Wybierz sposób konwersji" << endl << "[1] Celsjusza na Fahrenheita" << endl;
    cout << "[2] Fahrenheita na Celsjusza" << endl << "Wybór: ";
    cin >> s;
    cout << fixed << setprecision(2);
    if (s == 1) {
        cout << "Podaj temperaturę: ";
        cin >> c;
    }
    else if (s == 2) {
        cout << "Podaj temperaturę: ";
        cin >> f;
       
    }

    return 0;

}

/*Wybierz sposób konwersji:
[1] Celsjusza na Fahrenheita
[2] Fahrenheita na Celsjusza
Wybór: 1
Podaj temperaturę: 36.6
36.60 st. Celsjusza to 97.88 st. Fahrenheita
Wybierz sposób konwersji:
[1] Celsjusza na Fahrenheita
[2] Fahrenheita na Celsjusza
Wybór: 1
Podaj temperaturę: -300
Zbyt zimno na liczenie!*/