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
    //Entrada de dados
    printf("Digite seu nome: ");
    fgets(pessoa1.nome,100,stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);
    scanf("%c");
    printf("Digite F ou M para o sexo: ");
    scanf("%c", &pessoa1.sexo);
    //SE  eu colocar o nome aqui, vou ter que limpar o buffer do teclado então vou colocar o nome  a cima.

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
    return 0;
}
