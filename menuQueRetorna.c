#include <stdio.h>

#include <math.h>

#include <string.h>

int main() //estou tentando melhorar a indentacao, desculpa :(
{
    //variaves;
    int matricula;
    int i, j;
    char nameH;
    int menu, nuser, n2, ano;
    float n1, n4, n5;
    float elevacao, raiz;
    float n10, n20, n30; /// notas
    float pn1 = 10, pn2 = 20;
    float mediap = 0;
    float notas1, notas2, med;
    //lista de printf do menu//
    printf("__Digite 1 para o verificador de numero par__\n\n");
    printf("__Digite 2 para potencias__\n\n");
    printf("__Digite 3 para calcular a raiz de uma potencia__\n\n");
    printf("__Digte 4 para saber se o ano eh bissexto__\n\n");
    printf("__Digite 5 PARA CALCULAR A SUA MEDIA PONDERADA__\n\n");
    printf("__Digite 6 para calcular a sua media de 2 notas__\n  (por favor digite de 0 a 10 )\n\n");
    printf("__Digite 8 Para saber se um numero eh primo ou nao\n\n");
    printf("__Digite 9 para seguencia de fibonacci\n\n");
    printf("__Digite 10 para saber meu nome. e minha matricula  em hexadecimal__\n\n");
    // fim printf//
    scanf("%d", & menu);
    if (menu < 0 || menu > 10) {
        printf("==Numero invalido, tente novamente==\n\n");
        return main();
    }

    switch (menu) {
    case 0:
        printf("PROGRAMA FINALIZADO,\n\n\n VOLTE SEMPRE!!!");
        break;
    case 1:
        printf("digite um numero:\n");
        scanf("%d", & nuser); //usuario digita um numero;
        if (nuser % 2)
            printf("esse numero impar");
        else
            printf("esse numero e par");
        break;
    case 2:
        printf("digite o numero");
        scanf("%f", & n1);
        if (n1 < 0) {
            printf("numero invalido, programa reniciado !!!  \n\n\n");
        }
        printf("digite o expoente");
        scanf("%d", & n2);
        elevacao = pow(n1, n2);
        printf("o resultado eh %.e\n", elevacao);
        break;
    case 3:
        printf("digite o numero");
        scanf("%f", & n1);
        if (n1 < 0) {
            printf("numero invalido, programa reniciado !!!  \n\n\n");
        }
        printf("digite o expoente");
        scanf("%d", & n2);
        elevacao = pow(n1, n2);
        raiz = sqrt(elevacao);
        printf("o resultado eh %lf", raiz);
        break;
    case 4:
        printf("digite um ano em formato inteiro");
        scanf("%d", & ano);
        if (ano % 2) {
            printf("\nesse ano nao eh bixesto");
        } else
            printf("esse ano eh bixesto");
        break;
    case 5:
        printf("digite a primeira nota\n");
        scanf("%f", & n10);
        printf("digte a segunda nota\n");
        scanf("%f", & n20);
        printf("digite a terceira nota\n");
        scanf("%f", & n30);

        mediap = (n10 * pn1) + (n20 * pn1) + (n30 * pn2);
        mediap = mediap / 4;
        if (mediap >= 60) {
            printf("APROVADO, sua media ponderada eh: %f", mediap);
        } else {
            printf("REPROVADO, SUA MEDIA PONDERADA EH: %f", mediap);
        }
        break;
    case 6:
        printf("digite a primeira nota\n");
        scanf("%f", & notas1);
        printf("digite a segunda nota");
        scanf("%f", & notas2);
        if ((notas1 >= 0 && notas1 < 11) && (notas2 >= 0 && notas2 < 11)) {
            med = (notas1 + notas2) / 2;
            printf("sua media eh : %f", med);
        } else {
            printf("voce digitou um numero errado, tente novamente");
            return main();
        }
        break;
        int f1,f2;
        int i, n, aux;
    case 9:
        f1=0;
        f2=1;
        printf("\nNumeros da sequencia :");
        scanf("%d", &n);

        printf("\nSequencia fibonacci: ");
        printf("%d %d ", f1, f2);

        for(i=0; i < n; i++) {
            aux = f1 + f2;
            f1 = f2;
            f2 = aux;

            printf("%d ", aux);
        }
        break;
        int nprimo=0;
    case 8:
        printf("Digite um Numero");
        scanf("%d", &nprimo);
            if(nprimo%2==1){
                printf("Esse numero eh primo");
            }else{
            printf("nao eh primo");
            }
            break;
    case 10:
        matricula = 1920027064;
        printf("Diogo Silva Pavani\n matricula: ");
        printf("%x", matricula);
        break;

    }
    return 0;

}
// if(menu>=0){
// printf("programa finalizado");

//}
