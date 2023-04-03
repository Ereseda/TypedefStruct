#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Aula 167: Como criar novos tipos de dados em C com Typedef struct
//https://www.youtube.com/watch?v=4B6kUBCcUWE&list=PLqJK4Oyr5WShSqejWzL5oMuujnHFeHhSC
//Atividade do dia 03/04/2023

typedef struct{
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

struct Pessoa2{
    int idade;
    char sexo;
    char nome[100];
};

int main(){
    Pessoa pessoa1;
    //struct Pessoa2 pessoa2;

    pessoa1.idade = 35;
    pessoa1.sexo = 'f';
    strcpy(pessoa1.nome,"Maria");
    //Para imprimir

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
    return 0;
}
