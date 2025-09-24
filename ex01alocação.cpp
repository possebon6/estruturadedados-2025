#include <stdio.h>
#include <iostream>

int main() {
    int* numero = new int[5];

    printf ("Digite 5 números\n");
    
    for (int i = 0; i < 5; ++i) {
       printf ("Digite o número %i: ", (i+1));
       std::cin >> numero[i];
    }
    
    printf ("Números digitados: ");
    
    for (int i = 0; i < 5; ++i) {
        std::cout << numero[i] << " ";
    }
    std::cout << std::endl;

    delete[] numero;
    return 0;
}