#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef struct{
    char logradouro[100];
    int numero;
    char bairro[60];
    int cep;
    char cidade[60];
    char estado[60];
}End;

typedef struct {
    End end;
    char nome[100];
    char email[100];
    char telefone[15];
}CadAluno;

void cabecalho(){
    setlocale(LC_ALL, "Portuguese");
    printf("////////////////////////////////////////////////////////////////////\n");
    printf("//                                                                //\n");
    printf("//  AUTOR: Eli Santos Resed�                                      //\n");
    printf("//  DATA: 30/03/2023                                              //\n");
    printf("//  Descri��o do problema solucionado:                            //\n");
    printf("//  Cadastro de usu�rio, usado Struct, vetor e fun��o para        //\n");
    printf("//  solicitar o cadastro do cliente e imprimir o cadastro.        //\n");
    printf("//                                                                //\n");
    printf("////////////////////////////////////////////////////////////////////\n");
}

void imprimirCadAluno(CadAluno cadaluno){
   //system("cls");
   printf("\nNome: %s\nEmail: %s\nTelefone: %d\n", cadaluno.nome,cadaluno.email,cadaluno.telefone);
   printf("Endere�o: %s\nNumero: %d\nBairro: %s\nCEP: %d\n", cadaluno.end.logradouro, cadaluno.end.numero, cadaluno.end.bairro, cadaluno.end.cep);
   printf("Cidade: %s\nEstado: %s\n", cadaluno.end.cidade,cadaluno.end.estado);
}

void cadastrarAluno(CadAluno *cadaluno){

    setlocale(LC_ALL,"Portuguese");
    system("cls");
    printf("Digite o nome do aluno: ");
    while(getchar()!='\n');
    fgets(cadaluno->nome, 100,stdin);
    //scanf("%{^\n]", cadaluno->nome, 100, stdin);

    printf("Digite o email do aluno: ");
    fgets(cadaluno->email, 100,stdin);

    printf("Digite o endere�o do aluno: ");
    fgets(cadaluno->end.logradouro, 100,stdin);

    printf("Digite o Bairro do aluno: ");
    fgets(cadaluno->end.bairro, 60,stdin);

    printf("Digite a cidade do aluno: ");
    fgets(cadaluno->end.cidade, 60, stdin);

    printf("Digite o estado: ");
    fgets(cadaluno->end.estado, 60, stdin);

    printf("Digite o telefone do aluno: ");
    fgets(cadaluno->telefone, 15, stdin);

    printf("Digite o n�mero do endere�o do aluno: ");
    scanf("%d",&cadaluno->end.numero);

/*
    printf("Digite o telefone do aluno: ");
    scanf("%d",&cadaluno->telefone);
*/
    printf("Digite o cep:");
    scanf("%d",&cadaluno->end.cep);

}

int main(){
    setlocale(LC_ALL,"Portuguese");
    CadAluno cadaluno[100];

    int quantidade = 0;



    int op;
    do{
    printf("////////////////////////////////////////////////////////////////////\n");
    printf("//                                                                //\n");
    printf("//                      MENU DE OP��ES                            //\n");
    printf("//                                                                //\n");
    printf("//   1 - Incluir Clientes                                         //\n");
    printf("//   2 - listar Clientes                                          //\n");
    printf("//   3 - Excluir Clientes                                         //\n");
    printf("//   4 - Informa��o do Sistema                                    //\n");
    printf("//   5 - Sair                                                     //\n");
    printf("//                                                                //\n");
    printf("////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf(" Digite uma op��o: ");
    scanf("%d",&op);


    switch(op){
    case 1:

            cadastrarAluno(&cadaluno[quantidade]);
            quantidade++;
        break;
    case 2:
            for(int i = 0; i < quantidade; i++)
            imprimirCadAluno(cadaluno[i]);
        break;
    case 3:
        printf("Excluir Alunos: ");
        break;
    case 4:
        printf("Informa��o do sistema\n");
        cabecalho();
        break;
    case 5:
         printf(" Obrigado pela visita.");
         break;
    default:
        printf("Op��o inv�lida: ");
        //getch();
        break;
    }
    }while(op != 5);


}
