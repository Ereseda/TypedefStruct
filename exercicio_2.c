#include<stdio.h>
#include<stdlib.h>
//#define qtde 2
/*
    2 - Faça um pragrama que leia n inteiros(definidos pelo usuário)
    armazenando-os em um vetor alocada dinamicamente.
*/
int main(){
    int *ptr;
    int qtde,i;
    int n[qtde];

    ptr = (int *)malloc(qtde * sizeof(int));

    for(i = 0; i < qtde; i++){
        printf("Entre com n[%d]: ", i+1);
        scanf("%d", &ptr[i]);
    }
    return 0;
}
