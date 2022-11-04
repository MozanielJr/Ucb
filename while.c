// Comando de repeticao while



#include <stdio.h>

int main(){

int iniciar;

printf("Deseja iniciar o algoritmo ? Digite 1 se SIM e 2 se NAO ");
scanf("%d", &iniciar);

while (iniciar == 1)
{
    printf("..........");
    printf("Deseja continuar? 1 se SIM:");
    scanf("%d", &iniciar);
}





}