#include <stdio.h>
int main() {
    int num_tarefa, dim, arg;

    printf("Inserir numero da tarefa:\n");
    scanf("%d", &num_tarefa);

    while ((num_tarefa != 1) && (num_tarefa != 2) && (num_tarefa != 3)){
        printf("Tarefa nao existe.\nInserir numero da tarefa:\n");
        scanf("%d",&num_tarefa);
    }

    printf("Inserir dimensao do array:\n");
    scanf("%d",&dim);

    int arr[dim];

    printf("Inserir elementos do array:\n");
    for (int i=0;i<dim;i++){
        scanf("%d",&arr[i]);
    }

    if (num_tarefa == 1){
        printf("Inserir indice:\n");
    }else if (num_tarefa == 2){
        printf("Inserir shifter:\n");
    }else if (num_tarefa == 3){
        printf("Inserir valor:\n");
    }

    scanf("%d",&arg);
    if (num_tarefa == 2){
        while (arg < 0){
            printf("Shifter nao pode ser menor que zero.\nInserir Shifter:\n");
            scanf("%d",&arg);
        }
    }
    if (num_tarefa == 1) {
        while (((arg + 1) > dim) || (arg < 0)) {
            if (arg < 0) {
                printf("Indice nao pode ser menor que zero.\nInserir indice:\n");
                scanf("%d", &arg);
            } else {
                printf("Indice nao pode ser maior ou igual a dimensao.\nInserir indice:\n");
                scanf("%d", &arg);
            }

        }
    }
    if (num_tarefa == 1){
        soma_elemento(arr,dim,arg);
    }
    else if (num_tarefa == 2){
        roda_esq(arr,dim,arg);
    }
    else if (num_tarefa == 3) {
        remove_menores(arr,dim,arg);
    }
    return 0;
}