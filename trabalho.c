#include <stdio.h>
/*
    Trabalho AV2 Linguagem C
    Aluno: Glauber Gonçalves
    
    Criar um programa em C para ler nome e a av1 de 30 alunos e 
    imprimir a lista ordernada por ordem decrescente de nota
    como no exemplo:
    
    Listagem da AV1
----------------------------------
Nome do aluno	AV1
Fulano			10.00
Ciclano			9.00
Beltrano		8.80
…
Mascote 		5.50
*/
void main()

{
    // declaração das variaveis 
    char nome[30][15];
    float nota[30], auxf;
    int opcao, i, j,auxi, n_aluno[30];

    // guardando dados digitados pelo usuario
    // nome e nota
   
   printf("Olá, meu nome é GlauberGoncalves e este programa pode ser visto\n");
   printf("no seguinte endereço do github:\n");
   printf("https://github.com/GlauberGoncalves/trabalhoAv2/blob/master/trabalho.c\n\n");
   
    for(i=0;i<=29;i++)
    {
        printf("Entre com nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        printf("Entre com a nota do %s : ", nome[i]);
        scanf("%f", &nota[i]);
        n_aluno[i] = i;
    }  
/*
    usei uma variavel auxiliar para trocar o valor
    que esta na primeira variavel para a segunda e o valor
    da segunda var para a primeira.
    Essa parte do cod colocara as notas e os alunos em ordem
    decrescente
*/
    do
    {
     opcao = 0; // segundo a bolha: se for realizado 1 troca toda sequencia
     for(i=0;i<=29;i++) // terá que repetir aque que nenhuma troca seja
     {                  // realizada para que saia do laço  DO WHILE 
         if (nota[i] < nota[i + 1])
         {
             opcao = 1;
             auxf = nota[i + 1];
             nota[i + 1] = nota[i];
             nota[i] = auxf;
             
             auxi = n_aluno[i];
             n_aluno[i] = n_aluno[i + 1];
             n_aluno[i + 1] = auxi;
         }
     }

    }while (opcao == 1);
/*
    imprime os dados já na ordem decrescente
*/

    system("clear || cls");
    printf("Listagem da AV1\n");
    printf("------------------------------------\n");
    printf("Nome do aluno\t\t\tNota\n");
    
    for (i=0;i<=29;i++)    
    printf("%s   \t\t\t %2.f\n", nome[n_aluno[i]], nota[i]);
}