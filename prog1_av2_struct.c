#include <stdio.h>
/*
    !! Struct !!
    
    trabalho av2 usando Registros
    Glauber
    
    
*/

    struct pessoa{
        char nome[10];
        float nota;
    };



void main()

{
    // declaração das variaveis 
    int  i, repetir;
    
    struct pessoa aluno[30];
    struct pessoa aux;

    system("clear");

   for(i=0;i<=2;i++)
    {
        printf("Olá, meu nome é GlauberGoncalves e este programa pode ser visto\n");
        printf("no seguinte endereço do github:\n");
        printf("https://github.com/GlauberGoncalves/trabalhoAv2/blob/master/trabalho.c\n\n");
        

        printf("Entre com nome do aluno %d: ", i+1);
        scanf("%s", aluno[i].nome);
        printf("Entre com a nota do %s : ", aluno[i].nome);
        scanf("%f", &aluno[i].nota);
        system("clear");
    }  

    do
    {
        repetir = 0; // segundo a bolha: se for realizado 1 troca toda sequencia
       
        for(i=0;i<=2;i++) // terá que repetir aque que nenhuma troca seja
        {                  // realizada para que saia do laço  DO WHILE 
             if (aluno[i].nota < aluno[i+1].nota)
                {
                     repetir    = 1;
                     aux        = aluno[i];
                     aluno[i]   = aluno[i+1];
                     aluno[i+1] = aux;
                }
        }

    }while (repetir == 1);
    
/*
    imprime os dados já na ordem decrescente
*/

    system("clear || cls");
    printf("Listagem da AV1\n");
    printf("------------------------------------\n");
    printf("Nome do aluno\t\t\tNota\n");
    
    for (i=0;i<=2;i++)    
    printf("%s   \t\t\t %2.f\n", aluno[i].nome, aluno[i].nota);    
    
}