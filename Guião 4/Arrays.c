//
// Created by franc on 04/03/2020.
//

#include "Arrays.h"
#include <stdio.h>
void print(int *arr,int dim) {
    printf("A solucao e:\n");
    printf("(");
    for (int i=0;i<(dim-1);i++){
        printf("%d, ",arr[i]);
    }
    printf("%d)\n",arr[dim-1]);
}
void roda_esq (int *arr, int dim, int shifter) {
    for (int i=0;i<shifter;i++) {
        int x = arr[0];
        for (int i=0;i<(dim-1);i++) {
            arr[i] = arr[i+1];

        }
        arr[dim - 1]=x;
    }
    print(arr,dim);
}
void soma_elemento(int *arr, int dim, int idx){

    int num = arr[idx];
    for (int i=0;i<dim;i++) {
        arr[i]+= num;
    }
    print(arr,dim);
}
int remove_menores(int *arr,int dim,int valor) {
    int i,contador=0;
    int z;
    int resultado = 0;
    for (i = 0; i < dim - 1; i++) {
        if (arr[contador] < valor) {
            z = arr[contador];
            for (int p=contador;p<(dim-1);p++) {
                arr[p] = arr[p+1];
            }

            arr[dim - 1] = z;
        } else {
            contador++;
            resultado++;

        }
    }
    print(arr,dim);
    return resultado;
}