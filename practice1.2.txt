#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "ukr");
    double a, b, c;
    cout << "Введіть коефіцієнти a, b і c біквадратного рівняння: ";
    cin >> a;
    cin >> b;
    cin  >> c;

    if (a == 0) {
       cout << "Це не є біквадратним рівнянням, оскільки a = 0." << endl;
    }
    else {
        double D = b * b - 4 * a * c; 

        if (D < 0) {
            cout << "Рівняння не має дійсних коренів." << endl;
        }
        else if (D == 0) {
            double x = -b / (2 * a);
            cout << "Рівняння має один подвійний корінь: x = " << x << endl;
        }
        else {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Рівняння має два корені: x1 = " << x1 << " і x2 = " << x2 << endl;
        }
    }

    return 0;
}

