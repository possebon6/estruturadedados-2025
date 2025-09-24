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

    int par = 0, impar = 0;
    for (int i = 0; i < vetor[i]; ++i) {
        if (vetor[i] % 2 == 0)
            par++;
        else
            impar++;
    }
    
    printf ("São %i pares. \n", par);
    printf ("São %i ímpares.", impar);
    
    delete[] vetor;

    return 0;
}
