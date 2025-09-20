#include <stdio.h>
#include <math.h>
 int main ()
 {
    int mat[4][4], i, j, soma=0;

    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            printf ("Digite o valor para a matriz na linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat[i][j]);
            {
                soma=soma+mat[i][j];
            }
        }
        printf ("\n");
    }
    
    for (i=0; i<4; i++)
    {
        for (j=0;j<4; j++)
        {
            printf ("%d", mat[i][j]);
        }
        printf ("\n");
    }
    
    printf ("A soma dos valores é: %d", soma);

    return 0;
}