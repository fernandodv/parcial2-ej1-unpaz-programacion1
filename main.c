/******************************************************************************
Cargar en una matriz de 4X4. Calcular la media de la matriz, luego mostrar 
por pantalla los valores que superan la media, pero del sector sombreado.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, sumadorMedia = 0, cantidadValoresParaMedia = 0;
    int matriz[4][4];
    float media = 0;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Ingrese fila: %d columna %d:",i , j);
            scanf("%d", &matriz[i][j]);
//            matriz[i][j] = 0;
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            // Saco el valor medio de la matriz
            sumadorMedia = sumadorMedia + matriz[i][j];
            cantidadValoresParaMedia++;
            //printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    media = sumadorMedia / cantidadValoresParaMedia;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
           if(j>=i){
                if(matriz[i][j]>media){
                    printf("%d \t",matriz[i][j]);
                }else{
                    printf("0 \t");
                }
            }else{
                printf("0 \t");
            }
        }
        printf("\n");
    }

    printf("El valor promedio es %2.f" , media);

    return 0;
}
