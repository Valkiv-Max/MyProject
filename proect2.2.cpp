#include <iostream>
#include <cmath>
using namespace std;

double findF(double a, double b, double c, double x) {
    double f;
    if (x < 5 && c != 0) {
        f = -a * x * x - b;
    }
    else if (x > 5 && c == 0) {
        f = x - a / x;
    }
    else {
        f = -x / c;
    }
    return f;
}

int main() {
    double a, b, c, X_start, X_end, H;
    setlocale(LC_CTYPE, "ukr");
    cout << " Ввести a: ";
    cin >> a;
    cout << "Ввести b: ";
    cin >> b;
    cout << "Ввести c: ";
    cin >> c;
    cout << "Ввести початок функції: ";
    cin >> X_start;
    cout << "Ввести кінець функції: ";
    cin >> X_end;
    cout << "Ввести крок H: ";
    cin >> H;
    cout << "\n   X          f    \n";

    for (double x = X_start; x <= X_end; x += H) {
        double f = findF(a, b, c, x);
        cout <<  x << "\t"  << f << endl;
        
    }
    return 0;
}
