#include <stdio.h>
#include <iostream>

int main() {
    int tamanho;
    printf ("Qual o tamanho do vetor?");
    scanf ("%i", &tamanho);
   
    int* vetor = new int[tamanho];

    
    std::cout << "Digite os valores do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        printf ("Valor do vetor %i:", (i+1));
        std::cin >> vetor[i];
    }

    printf ("Valores dos vetores: ");
    
    for (int i = 0; i < tamanho; ++i) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
    delete[] vetor;

    return 0;
}