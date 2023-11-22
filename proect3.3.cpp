#include <iostream>
using namespace std;

const int MAX_LENGTH = 1000;
int main() {
    setlocale(LC_ALL, "ukr");

    char text[MAX_LENGTH];

    cout << "Введіть текстовий рядок: ";
    cin.getline(text, MAX_LENGTH);

    int marks = 0;
    int count_words_with_even_length = 0;

    for (char* p = text; *p != '\0'; p++) {
        if (strchr(".,!?;:", *p)) {
            marks++;
        }
    }

    char word[MAX_LENGTH];
    int word_length = 0;

    for (char* p = text; *p != '\0'; p++) {
        if (isalpha(*p)) {
            word[word_length++] = *p;
        }
        else if (word_length % 2 == 0 && word_length > 0) {
            count_words_with_even_length++;
            word_length = 0;
        }
    }

    int length = strlen(text);
    for (int i = 0; i < length / 2; i++) {
        swap(text[i], text[length - i - 1]);
    }

    cout << "Кількість розділових знаків: " << marks << endl;
    cout << "Кількість слів з парною кількістю літер: " << count_words_with_even_length << endl;
    cout << "Змінений текст: " << text << endl;

    return 0;
}
