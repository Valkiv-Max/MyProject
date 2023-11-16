#include<iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int n , m;
    cout << "Введіть розміри матриці (n x m): ";
    cin >> n >> m;

    double matrix[50][50];
   
     
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
             cout << "Введіть " << i + 1 << "-й елемент " << j + 1 << "-го рядка: ";
             cin >> matrix[i][j];
         }
     }
       int sum = 0;
         for (int j = 0; j < m; j++) {
             double H;
             for (int i = 0; i < n; i++) {
                 if (matrix[i][j] < 0) {
                     
                 }
             }
             if (!H) {
                 for (int i = 0; i < n; i++) {
                     sum += matrix[i][j];
                 }
             }
         }
     cout << "Сума елементів в тих стовпцях, які не містять від'ємних елементів: " << sum << endl;
      
    return 0;
}



