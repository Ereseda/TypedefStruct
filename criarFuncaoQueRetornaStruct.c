#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Atividade do dia 03/04/2023
//https://www.youtube.com/watch?v=Hdg3MaiE39c&list=PLqJK4Oyr5WShSqejWzL5oMuujnHFeHhSC&index=6
typedef struct{
    int dia, mes, ano;
}DataNas;
typedef struct{
    DataNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;
//Função que Lê os dados de uma pessoa para quem chamou.
Pessoa lerPessoa(){
    Pessoa p;
    printf("Digite seu nome: ");
    fgets(p.nome,100,stdin);
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    scanf("%c");
    printf("Digite F ou M para o sexo: ");
    scanf("%c", &p.sexo);
    //SE  eu colocar o nome aqui, vou ter que limpar o buffer do teclado então vou colocar o nome  a cima.
    printf("Digite sua data de nascimento no formato dd mm aaaa.");
    scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
//    Imprime os dados
/*
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", p.nome, p.idade, p.sexo);
    printf("Data de nasc.: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);*/
    return p;
}

void imprimirPessoa(Pessoa p){
    printf("\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nasc.: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}
int main(){

    Pessoa pessoa1;

    pessoa1 = lerPessoa();
    imprimirPessoa(pessoa1);
    return 0;
}



