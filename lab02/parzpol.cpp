#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a;
    cout << "Podaj liczbę:" << endl;
    cin >> a;
    cout << "Parzysta: ";
    if (a % 2 == 0)  cout << "TAK";
    else cout << "NIE";
    cout << endl << "Podzielna przez 8: ";
    if (a % 8 == 0)  cout << "TAK";
    else cout << "NIE";
    cout << endl << "Podzielna przez 16: ";
    if (a % 16 == 0)  cout << "TAK";
    else cout << "NIE";
    cout << endl << "Ósemkowo: " << oct << a;
    cout << endl << "Szesnastkowo: " << hex << a;
    return 0;

}


/*Podaj liczbę: 27
Parzysta: NIE
Podzielna przez 8: NIE                                                          
Podzielna przez 16: NIE
Ósemkowo: 33
Szesnastkowo: 1b*/