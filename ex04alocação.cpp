
#include <iostream>
#include <cstring>
using namespace std;

char* alocaString(int tamanho) {
    return new char[tamanho + 1];
}

bool ehVogal(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    int tamanho;
    cout << "Tamanho: ";
    cin >> tamanho;
    cin.ignore(); 

    char* str = alocaString(tamanho);

    cout << "Escreva: ";
    cin.getline(str, tamanho + 1);

    cout << "Sem as vogais: ";
    for (int i = 0; str[i] != '\0'; i++) {
        if (!ehVogal(str[i])) {
            cout << str[i];
        }
    }
 
    delete[] str;
    return 0;
}