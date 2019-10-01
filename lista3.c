
//exercicio 1, lista 3:
#include <stdio.h>
#include <math.h>


int main()
{
    int i=0;
    int cont=0;
    char nome[100];
    printf("digite um char de ate 100caracteres");
    gets(nome);
    for(i=0; nome[i]!='\0';i++){
            cont++;
    }
    printf("%d", cont);
}

//////////////////////FIM DO EX1//////////////////////////////////////


