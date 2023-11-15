#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "ukr");

    double a, b, c ;
   cout << "Введіть коефіцієнти a, b і c для квадратного рівняння ax^2 + bx + c = 0: ";
    cin >> a;
    cin >> b;
    cin >> c;
  
    if (a == 0) {
        cout << "Це не є біквадратним рівнянням, оскільки a = 0." << endl;

    double n = -(b / a);
    double m = c / a;
   

cout << "Сума коренів: " << n << endl;
cout << "Добуток коренів: " << m << endl;

return 0;
}
