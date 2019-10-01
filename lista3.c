
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


                        /// INICIO EX2////

int main()
{
    int i=0;
    int cont=0;
    int vogais=0;
    char nome[100];
    printf("digite um char de ate 100caracteres");
    gets(nome);
    for(i=0; nome[i]!='\0';i++ && i<sizeof(nome) ){
        if(nome[i]=='a'||nome[i]=='A'||nome[i]=='e'||nome[i]=='E'||nome[i]=='i'||nome[i]=='I'||nome[i]=='o'||nome[i]=='O'||nome[i]=='u'||nome[i]=='U'){
            vogais++;
        }
    }
    printf("o numero de vogais eh: %d", vogais);
}

//////////////////////////////////////////////FIM EX2//////////////////////////////////////////////////////



//// inicio ex 3      nao consegui fazer :(/////////////////////////
printf("==SAO IGUAIS EM TODOS OS INDICES==")

//// inicio ex4////////////////////////////////////



#include <stdio.h>
#include <math.h>


int main()
{
    char nome1[100];
    char nome2[100];
    printf("digite os caracteres ate 100");
    scanf(nome1);
    int i;
    for(i=0;nome1[i]<sizeof(nome1)&&nome1[i]!='\0';i++)
        nome2[i]=nome1[i];

    printf("%s", *nome2);
    return 0;

  }




