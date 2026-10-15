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
        f = c * 9 / 5 + 32;
        if (c < 273.15) cout << "Zbyt zimno na liczenie!";
        else cout << c << " st. Celsjusza to " << f << " st. Fahrenheita";
        
    }
    else if (s == 2) {
        cout << "Podaj temperaturę: ";
        cin >> f;
        c = (f - 32) * 5 / 9;
        if (c < 273.15) cout << "Zbyt zimno na liczenie!";
        else cout << f << " st. Fahrenheita to "<< c << " st. Celsjusza";

    return 0;

}