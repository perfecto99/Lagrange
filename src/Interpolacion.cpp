#include <Interpolacion.hpp>
#include <iostream>
using namespace std;


void Interpolation::PG() {
    float x, y, i, j, k, r;

     cout << "\n**Advertencia el orden de los factores altera el producto**" <<  endl;
     cout << "\nA continuacion escrbira los datos que quiere interpolar" <<  endl;

     cout << "Escriba los valores de x" <<  endl;
     cout << ": ";
     cin >> x;
     cout << ": ";
     cin >> i;

     cout << "Escriba los valores de y" <<  endl;
     cout << ": ";
     cin >> y;
     cout << ": ";
     cin >> j;

     cout << "Ahora digame el valor intermedio al cual interpolara" <<  endl;
     cout << ": ";
     cin >> k;

    r = ((y * (k - i)) / (x - i)) + ((j * (k - x)) / (i - x));

     cout << r <<  endl;
}

void Interpolation::SG() {
    float x, y, i, j, o, p, k, r;

     cout << "\n**Advertencia el orden de los factores altera el producto**" <<  endl;

     cout << "Escriba los valores de x" <<  endl;
     cout << ": ";
     cin >> x;
     cout << ": ";
     cin >> i;
     cout << ": ";
     cin >> o;

     cout << "Escriba los valores de y" <<  endl;
     cout << ": ";
     cin >> y;
     cout << ": ";
     cin >> j;
     cout << ": ";
     cin >> p;

     cout << "Ahora digame el valor intermedio al cual interpolara" <<  endl;
     cout << ": ";
     cin >> k;

    r = ((y * (k - i) * (k - o)) / ((x - i) * (x - o))) + ((j * (k - x) * (k - o)) / ((i - x) * (i - o))) + ((p * (k - x) * (k - i)) / ((o - x) * (o - i)));

     cout << r <<  endl;

    getch();
}

void Interpolation::TG() {
    float x, y, i, j, k, o, n, p, m, r;

     cout << "\n**Advertencia el orden de los factores altera el producto**" <<  endl;

     cout << "Escriba los valores de x" <<  endl;
     cout << ": ";
     cin >> x;
     cout << ": ";
     cin >> i;
     cout << ": ";
     cin >> o;
     cout << ": ";
     cin >> n;

     cout << "\n  ";
}
