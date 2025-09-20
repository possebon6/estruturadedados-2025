#include <stdio.h>
#include <math.h>
 int main ()
 {
    int mat[4][4], i, j, soma=0;

   // Digitar valores para compor a matriz, armazenanr a somar os valores da diagonal principal
   
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            printf ("Digite o valor para a matriz na linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat[i][j]);
            if (i==j)
            {
                soma+=mat[i][j];
            }
        }
        printf ("\n");
    }
   
   // Exibir a matriz
   
    for (i=0; i<4; i++)
    {
        for (j=0;j<4; j++)
        {
            printf ("%d", mat[i][j]);
        }
        printf ("\n");
    }
    
   //Exibir a soma dos valores da diagonal principal 
   
    printf (" \n A soma da diagonal principal é: %d", soma);

    return 0;
}