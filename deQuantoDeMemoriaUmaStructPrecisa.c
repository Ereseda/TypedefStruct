#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Atividade do dia 03/04/2023
//https://www.youtube.com/watch?v=EJbIsx3iplU&list=PLqJK4Oyr5WShSqejWzL5oMuujnHFeHhSC&index=4
typedef struct{
    int dia, mes, ano;
}DataNas;
typedef struct{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

int main(){

    Pessoa pessoa1;
    DataNas data;
    printf("%d\n", sizeof(pessoa1));
    printf("Digite seu nome: ");
    fgets(pessoa1.nome,100,stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);
    scanf("%c");
    printf("Digite F ou M para o sexo: ");
    scanf("%c", &pessoa1.sexo);
    //SE  eu colocar o nome aqui, vou ter que limpar o buffer do teclado então vou colocar o nome  a cima.
    printf("Digite sua data de nascimento no formato dd mm aaaa.");
    scanf("%d%d%d", &pessoa1.dataNas.dia, &pessoa1.dataNas.mes, &pessoa1.dataNas.ano);
//    Imprime os dados
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

    printf("Data de nasc.: %d/%d/%d\n", pessoa1.dataNas.dia, pessoa1.dataNas.mes, pessoa1.dataNas.ano);
    return 0;
}


